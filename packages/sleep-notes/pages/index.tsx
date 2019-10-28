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
import JSONTree from 'react-json-tree';

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
            color: theme.palette.text.secondary,
        },
        paperform: {
            padding: theme.spacing(2),
            color: theme.palette.text.secondary,
            textAlign: 'center',
        },
    }),
);

const jsonTheme = {
  "scheme": "Material Lighter",
  "author": "Nate Peterson",
  "base00": "#FAFAFA",
  "base01": "#E7EAEC",
  "base02": "#CCEAE7",
  "base03": "#CCD7DA",
  "base04": "#8796B0",
  "base05": "#80CBC4",
  "base06": "#80CBC4",
  "base07": "#FFFFFF",
  "base08": "#FF5370",
  "base09": "#F76D47",
  "base0A": "#FFB62C",
  "base0B": "#91B859",
  "base0C": "#39ADB5",
  "base0D": "#6182B8",
  "base0E": "#7C4DFF",
  "base0F": "#E53935",
};

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
                    <Paper className={classes.paperform}>
                        <p>Copy and paste your sleep note into the text field below:</p>
                        <TextField variant="outlined" value={note} onChange={evt => setNote(evt.target.value)} multiline fullWidth />
                        <Button className={classes.button} variant="contained" color="primary" onClick={handleProcess}>Process</Button>
                    </Paper>
                </Grid>
                <Grid item md={6} sm={12}>
                    <Paper className={classes.paper}>
                        <JSONTree data={tree} theme={jsonTheme} invertTheme={false} />
                    </Paper>
                </Grid>
            </Grid>
        </div>
    );
}
