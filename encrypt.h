/**
 * Declaration of Reverse Engineering.
 *
 * This code was reverse engineered from the Pokémon GO Application,
 * released by Niantic Inc.
 *
 * This code was reverse engineered legally under section 47D of the
 * Australian Copyright Act, 1968 (as amended)
 *
 * http://www.austlii.edu.au/au/legis/cth/consol_act/ca1968133/s47d.html
 *
 * It meets all the requrirements, as itemized below:
 *
 * 1a. It was made by a Licensee of the original program
 * 1b. It was reverse engineered to obtain information to make another
 *       program to connect to the standard Pokémon GO API.
 * 1c. The reproduction is the minimum required to obtain the information
 *       required in section b
 * 1d. It implements only the minimum required to connect to the API
 * 1e. The information is not readily available to the licencee from any other
 *       source, including the Licensor, when the adaptation was made.
 *       
 *
 * Any further Legal questions should be addressed to Electronic Frontiers Australia,
 * via https://www.efa.org.au/
 *
 * Copyright on this implementation of the Reverse Engineered code is Asserted, 2016
 *
 * A Licence to use this work is granted under the Creative Commons CC BY-NC-SA 3.0 (AU) licence.
 *
 * https://creativecommons.org/licenses/by-nc-sa/3.0/au/
 *
 * Trademarks:
 *   Pokémon GO is a trademark of Nintendo Co., LTD. 
 *   NIANTIC LABS is a trademark of Niantic, Inc. 
 *
 * No infringement of any trademarks is intended or implied.
 *
 * For more information, see https://pgoapi.com
 */

#ifndef ENCRYPT_H
#define ENCRYPT_H

extern int encrypt(const unsigned char *input, size_t input_size,
	const unsigned char* iv, size_t iv_size,
	unsigned char* output, size_t * output_size);

#endif
