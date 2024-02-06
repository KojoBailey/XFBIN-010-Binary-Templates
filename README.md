# CyberConnect2 XFBIN Binary Templates for 010 Editor
This is a repository of binary templates for [010 Editor](https://jojomodding.miraheze.org/wiki/010_Editor) with the purpose of parsing the XFBIN file format created by [CyberConnec2](https://jojomodding.miraheze.org/wiki/CyberConnect2) for use their various videogames.

The templates for each game are split into folders, and currently, there are only templates for [*JoJo's Bizarre Adventure: All-Star Battle R*](https://jojomodding.miraheze.org/wiki/All-Star_Battle_R), but support for other games should be possible. Feel free to contribute!

## Using these templates
For general help with using 010 Editor's template feature, refer to [Running Templates and Scripts](https://www.sweetscape.com/010editor/manual/Running.htm) on their docs.

To use the templates from this repository, open any XFBIN file (denoted by the `.xfbin` file extension and "`NUCC`" (`4E 55 43 43`) magic) and run `XfbinManager.bt` on it. It will automatically detect the type of binary data it is dealing with based on said data's file paths (e.g. `MainModeParam.bin` correlates to `MainModeParam`) and will parse the data accordingly.

If the data is not recognised, an `Unrecognised` chunk will be generated in the template results instead. If a chunk is being marked as unrecognised despite a corresponding BT file existing in the repository, please report it as an issue.

Be careful not to change the relative locations of any of the files in this repository, unless you know what you're doing. If a file is moved, `XfbinManager.bt` won't be able to locate it, causing everything to break.

## Creating templates
Coming soon...
