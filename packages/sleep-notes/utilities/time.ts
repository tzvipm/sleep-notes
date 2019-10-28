export class Time {
    private hour: number;
    private minute: number;
    private ampm?: 'am' | 'pm';

    constructor(
        data: { hour: number; minute: number; ampm?: 'am' | 'pm' },
        context?: 'am'|'pm',
    ) {
        this.hour = data.hour;
        this.minute = data.minute;
        this.ampm = data.ampm || context;
    }

    getHour(): number {
        const hour = this.hour === 12 ? 0 : this.hour;
        return this.ampm == 'pm' ? 12 + hour : hour;
    }

    getMinute(): number {
        return this.minute;
    }

    getMinutesFromMidnight(): number {
        return this.getHour() * 60 + this.getMinute();
    }

    toString(): string {
        return `${this.hour}:${('' + this.minute).padStart(
            2,
            '0'
        )}${this.ampm || ''}`;
    }
}

export class Duration {
    constructor(private start: Time, private end: Time, private daySpans: number = 0) {}

    getMinutes(): number {
        const diff = this.end.getMinutesFromMidnight() - this.start.getMinutesFromMidnight();
        const fromDays = this.daySpans * 24 * 60;
        return fromDays + diff;
    }

    toString() {
        const totalMinutes = this.getMinutes();
        const minutes = totalMinutes % 60;
        const hours = (totalMinutes - minutes) / 60;
        return `${hours} hours${minutes > 0 ? `and ${minutes} minutes` : ''}`;
    }
}