R"MANUAL(
Usage: wmbusmeters {options} <device> ( [meter_name] [meter_type]{:<modes>} [meter_id] [meter_key] )*

As <options> you can use:

    --addconversions=<unit>+ add conversion to these units to json and meter env variables (GJ)
    --alarmexpectedactivity=mon-fri(08-17),sat-sun(09-12) Specify when the timeout is tested, default is mon-sun(00-23)
    --alarmshell=<cmdline> invokes cmdline when an alarm triggers
    --alarmtimeout=<time> Expect a telegram to arrive within <time> seconds, eg 60s, 60m, 24h during expected activity.
    --debug for a lot of information
    --donotprobe=<tty> do not auto-probe this tty. Use multiple times for several ttys or specify "all" for all ttys.
    --exitafter=<time> exit program after time, eg 20h, 10m 5s
    --format=<hr/json/fields> for human readable, json or semicolon separated fields
    --json_xxx=yyy always add "xxx"="yyy" to the json output and add shell env METER_xxx=yyy
    --listenvs=<meter_type> list the env variables available for the given meter type
    --listfields=<meter_type> list the fields selectable for the given meter type
    --listmeters list all meter types
    --listmeters=<search> list all meter types containing the text <search>
    --logfile=<file> use this file instead of stdout
    --logtelegrams log the contents of the telegrams for easy replay
    --ignoreduplicates ignore duplicate telegrams, remember the last 10 telegrams
    --meterfiles=<dir> store meter readings in dir
    --meterfilesaction=(overwrite|append) overwrite or append to the meter readings file
    --meterfilesnaming=(name|id|name-id) the meter file is the meter's: name, id or name-id
    --meterfilestimestamp=(never|day|hour|minute|micros) the meter file is suffixed with a
                          timestamp (localtime) with the given resolution.
    --nodeviceexit if no wmbus devices are found, then exit immediately
    --oneshot wait for an update from each meter, then quit
    --resetafter=<time> reset the wmbus dongle regularly, default is 23h
    --selectfields=id,timestamp,total_m3 select fields to be printed
    --separator=<c> change field separator to c
    --shell=<cmdline> invokes cmdline with env variables containing the latest reading
    --silent do not print informational messages nor warnings
    --useconfig=<dir> load config files from dir/etc
    --usestderr write notices/debug/verbose and other logging output to stderr (the default)
    --usestdoutforlogging write debug/verbose and logging output to stdout
    --verbose for more information
)MANUAL";
