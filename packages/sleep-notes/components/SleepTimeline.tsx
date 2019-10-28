import React from 'react';
import { Time, Duration } from '../utilities/time';

export default function SleepTimeline({ data = {} }: any) {
    const { entries = {} } = data;
    if (entries.bedtime == null || entries.nextBedtime == null) {
        return
        (
            <div>
                <h3>Timeline coming soon</h3>
                <p>start: ?</p>
                <p>end: ?</p>
                <p>duration: ?</p>
            </div>
        );
    }
    const start = new Time(entries.bedtime, 'pm');
    const end = new Time(entries.nextBedtime, 'pm');
    const duration = new Duration(start, end, 1);

    return (
        <div>
            <h3>Timeline coming soon</h3>
            <p>start: {start.toString()}</p>
            <p>end: {end.toString()}</p>
            <p>duration: {duration.toString()}</p>
        </div>
    );
}
