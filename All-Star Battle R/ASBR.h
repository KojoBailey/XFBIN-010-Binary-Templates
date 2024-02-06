//------------------------------------------------
//--- 010 Editor v13.0.2 Binary Template
//
//      File: 
//   Authors: 
//   Version: 
//   Purpose: 
//  Category: 
// File Mask: 
//  ID Bytes: 
//   History: 
//------------------------------------------------

#define ASBR_H

#include "All-Star Battle R/Character_IDs.h"

// List of supported templates
#include "All-Star Battle R/PlayerColorParam.bt"
#include "All-Star Battle R/MainModeParam.bt"
#include "All-Star Battle R/sndcmnparam.bt"

void GenerateStruct() {
    local string VersionlessPath = RemoveVersionNumber(GetFilePath(i));
    Printf(Str("> Generating struct from path %s...\n", VersionlessPath));

    switch (VersionlessPath) {
        case "PlayerColorParam.bin":
            struct TPlayerColorParam PlayerColorParam <name = Str("chunk %s", Title), open = true, read = Read, comment = Comment>;
            break;
        case "MainModeParam.bin":
            struct TMainModeParam MainModeParam <name = Str("chunk %s", Title), open = true, read = Read, comment = Comment>;
            break;
    // sndcmnparam
        case "cmnparam/bin/XXX/cridata.bin":
            struct TCridata Cridata <name = Str("chunk %s", Title), read = Read, comment = Comment>;
            break;
        case "cmnparam/bin/XXX/pldata.bin":
            struct TPldata Pldata <name = Str("chunk %s", Title), read = Read, comment = Comment>;
            break;
        case "cmnparam/bin/XXX/battle.bin":
        case "cmnparam/bin/XXX/commse0.bin":
        case "cmnparam/bin/XXX/gimmick.bin":
        case "cmnparam/bin/XXX/player.bin":
        case "cmnparam/bin/XXX/sd01a_mob.bin":
        case "cmnparam/bin/XXX/sd02a_mob.bin":
        case "cmnparam/bin/XXX/sd03b_mob.bin":
        case "cmnparam/bin/XXX/sd04a_mob.bin":
        case "cmnparam/bin/XXX/sd04b_mob.bin":
        case "cmnparam/bin/XXX/sd05a_mob.bin":
        case "cmnparam/bin/XXX/sd06a_mob.bin":
        case "cmnparam/bin/XXX/sd06b_mob.bin":
        case "cmnparam/bin/XXX/sd07a_mob.bin":
        case "cmnparam/bin/XXX/sd08a_mob.bin":
            struct TSndcmnparam Sndcmnparam <name = Str("chunk %s", Title), read = Read, comment = Comment>;
            break;
        default:
            struct TUnknown Unknown <name = "chunk Unrecognised", read = Read, comment = "The file path for this data could not be recognised.">;
    }
}