// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

#include <string>

const std::string windowsAsciiArt =
"\n                                                           \n"
" _  __  _____   __     __  _____    _______    ____    _   _ \n"
"| |/ / |  __ \  \ \   / / |  __ \  |__   __|  / __ \  | \ | |\n"
"| ' /  | |__) |  \ \_/ /  | |__) |    | |    | |  | | |  \| |\n"
"|  <   |  _  /    \   /   |  ___/     | |    | |  | | | . ` |\n"
"| . \  | | \ \     | |    | |         | |    | |__| | | |\  |\n"
"|_|\_\ |_|  \_\    |_|    |_|         |_|     \____/  |_| \_|\n"
"                                                             \n"
"                                                             \n";

const std::string nonWindowsAsciiArt =
"\n                                                           \n"
" _  __  _____   __     __  _____    _______    ____    _   _ \n"
"| |/ / |  __ \  \ \   / / |  __ \  |__   __|  / __ \  | \ | |\n"
"| ' /  | |__) |  \ \_/ /  | |__) |    | |    | |  | | |  \| |\n"
"|  <   |  _  /    \   /   |  ___/     | |    | |  | | | . ` |\n"
"| . \  | | \ \     | |    | |         | |    | |__| | | |\  |\n"
"|_|\_\ |_|  \_\    |_|    |_|         |_|     \____/  |_| \_|\n"
"                                                             \n"
"                                                             \n";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32

const std::string asciiArt = windowsAsciiArt;

#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
