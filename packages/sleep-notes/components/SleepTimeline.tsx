import React from 'react';
import { Time, Duration, AmPmContext, Minutes } from '../utilities/time';

export function SleepTimeline(props) {
    const entries = (props && props.data && props.data.entries) || {};
    if (entries.bedtime == null || entries.nextBedtime == null) {
        return <SleepTimelineDelegate />;
    }
    const context = new AmPmContext('pm');
    const start = new Time(entries.bedtime, context.get());

    const nightSleeps: Duration[] = [];
    for (let sleep of entries.nightSleeps) {
        const { from, to } = sleep;
        nightSleeps.push(
            new Duration(
                new Time(from, context.next(from.hour)),
                new Time(to, context.next(to.hour))
            )
        );
    }

    const wakeup = new Time(entries.wakeup, context.next(entries.wakeup.hour));

    const naps: Duration[] = [];
    for (let sleep of entries.naps) {
        const { from, to } = sleep;
        naps.push(
            new Duration(
                new Time(from, context.next(from.hour)),
                new Time(to, context.next(to.hour))
            )
        );
    }

    const end = new Time(
        entries.nextBedtime,
        context.next(entries.nextBedtime.hour)
    );
    const duration = new Duration(start, end, 1);

    const napSleep = naps.reduce((acc, cur) => acc + cur.getMinutes(), 0);
    const nightSleep = nightSleeps.reduce(
        (acc, cur) => acc + cur.getMinutes(),
        0
    );
    const totalSleep = napSleep + nightSleep;

    return (
        <SleepTimelineDelegate
            start={start.toString()}
            end={end.toString()}
            duration={duration.toString()}
            nightTotal={Minutes.toString(nightSleep)}
            napTotal={Minutes.toString(napSleep)}
            total={Minutes.toString(totalSleep)}
        />
    );
}

function SleepTimelineDelegate(props: {
    start?: string;
    end?: string;
    duration?: string;
    total?: string;
    nightTotal?: string;
    napTotal?: string;
}) {
    return (
        <div>
            <h3>Timeline coming soon</h3>
            <p>start: {props.start || '?'}</p>
            <p>end: {props.end || '?'}</p>
            <p>duration: {props.duration || '?'}</p>
            <h4>Sleep Totals</h4>
            <p>night: {props.nightTotal || '?'}</p>
            <p>naps: {props.napTotal || '?'}</p>
            <p>daily total: {props.total || '?'}</p>
        </div>
    );
}
