/*
 * Copyright (c) 2024 - Nathanne Isip
 * This file is part of QuickDigest5.
 * 
 * N8 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published
 * by the Free Software Foundation, either version 3 of the License,
 * or (at your option) any later version.
 * 
 * N8 is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with N8. If not, see <https://www.gnu.org/licenses/>.
 */

/**
 * This program accepts one or more file paths as command-line arguments. 
 * For each file, it computes its MD5 hash using the `QuickDigest5::fileToHash` 
 * method and prints the result to the console. If no file paths are provided, 
 * it displays a usage message indicating how to run the program.
 */
#include <iostream>
#include <quickdigest5.hpp>

int main(int argc, char** argv) {
    if(argc > 1)
        // Process each file path provided as an argument.
        for(int i = 1; i < argc; ++i)
            std::cout << QuickDigest5::fileToHash(argv[i])
                << std::endl;
    // Display usage instructions if no arguments are provided.
    else std::cout << "Usage:" << std::endl
        << "\t" << argv[0] << " <file-to-hash>"
        << std::endl;

    return 0;
}
