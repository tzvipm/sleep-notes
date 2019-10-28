import React, { useState } from 'react';
import Head from 'next/head';
import { createStyles, makeStyles, Theme } from '@material-ui/core/styles';
import AppBar from '@material-ui/core/AppBar';
import Toolbar from '@material-ui/core/Toolbar';
import Typography from '@material-ui/core/Typography';
import Button from '@material-ui/core/Button';
import IconButton from '@material-ui/core/IconButton';
import MenuIcon from '@material-ui/icons/Menu';
import TextField from '@material-ui/core/TextField';
import Paper from '@material-ui/core/Paper';
import Grid from '@material-ui/core/Grid';

const useStyles = makeStyles((theme: Theme) =>
    createStyles({
        root: {
            flexGrow: 1,
        },
        menuButton: {
            marginRight: theme.spacing(2),
        },
        button: {
            margin: theme.spacing(1),
        },
        title: {
            flexGrow: 1,
        },
        paper: {
            padding: theme.spacing(2),
            textAlign: 'center',
            color: theme.palette.text.secondary,
        },
    }),
);

export default function Home() {
    const classes = useStyles({});
    const [note, setNote] = useState('');
    const [tree, setTree] = useState({});

    const handleProcess = async () => {
        const response = await fetch('api/parsenote', {
            method: 'POST',
            mode: 'same-origin',
            headers:{'content-type': 'application/json'},
            body: JSON.stringify({note}),
        });
        const {parsed} = await response.json();
        setTree(parsed);
    };

    return (
        <div className={classes.root}>
            <Head>
                <title>Sleep Notes</title>
                <link rel='icon' href='/favicon.ico' />
            </Head>

            <AppBar position="static">
                <Toolbar>
                    <IconButton edge="start" className={classes.menuButton} color="inherit" aria-label="menu">
                        <MenuIcon />
                    </IconButton>
                    <Typography variant="h6" className={classes.title}>
                        Sleep Notes
            </Typography>
                </Toolbar>
            </AppBar>

            <Grid container spacing={3}>
                <Grid item md={6} sm={12}>
                    <Paper className={classes.paper}>
                        <p>Copy and paste your sleep note into the text field below:</p>
                        <TextField variant="outlined" value={note} onChange={evt => setNote(evt.target.value)} multiline fullWidth />
                        <Button className={classes.button} variant="contained" color="primary" onClick={handleProcess}>Process</Button>
                    </Paper>
                </Grid>
                <Grid item md={6} sm={12}>
                    <Paper className={classes.paper}>
                        <pre>{JSON.stringify(tree)}</pre>
                    </Paper>
                </Grid>
            </Grid>
        </div>
    );
}
