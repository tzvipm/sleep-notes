export type AmPm = 'am' | 'pm';

export class Time {
    private hour: number;
    private minute: number;
    private ampm?: AmPm;

    constructor(
        data: { hour: number; minute: number; ampm?: AmPm },
        context?: AmPm,
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

export class Minutes {
    public static toString(numMinutes: number): string {
        const minutes = numMinutes % 60;
        const hours = (numMinutes - minutes) / 60;
        return `${hours} hours${minutes > 0 ? ` and ${minutes} minutes` : ''}`;
    }
}

export class Duration {
    constructor(public start: Time, public end: Time, private daySpans: number = 0) {}

    getMinutes(): number {
        const diff = this.end.getMinutesFromMidnight() - this.start.getMinutesFromMidnight();
        const fromDays = this.daySpans * 24 * 60;
        return fromDays + diff;
    }

    toString() {
        return Minutes.toString(this.getMinutes());
    }
}

export class AmPmContext {
    private lastHour = 0;

    constructor(private ampm: AmPm) {}

    next(hour: number): AmPm {
        if (hour < this.lastHour) {
            this.toggle();
        }
        return this.get();
    }

    get(): AmPm {
        return this.ampm;
    }

    private toggle() {
        this.ampm = this.ampm === 'am' ? 'pm' : 'am';
    }
}