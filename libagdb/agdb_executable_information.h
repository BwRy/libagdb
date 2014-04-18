/*
 * The executable information definitions of a Windows SuperFetch database file
 *
 * Copyright (C) 2014, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _AGDB_EXECUTABLE_INFORMATION_H )
#define _AGDB_EXECUTABLE_INFORMATION_H

#include <common.h>
#include <types.h>

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct agdb_executable_information_100 agdb_executable_information_100_t;

struct agdb_executable_information_100
{
	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown1[ 4 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown2[ 4 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown3[ 4 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown4[ 4 ];

	/* Unknown
	 * Consists of 12 bytes
	 */
	uint8_t unknown5[ 12 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown6[ 4 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown7[ 4 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown8[ 4 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown9[ 4 ];

	/* Unknown
	 * Consists of 16 bytes
	 */
	uint8_t unknown10[ 16 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown11[ 4 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown12[ 4 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown13[ 4 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown14[ 4 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown15[ 4 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown16[ 4 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown17[ 4 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown18[ 4 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown19[ 4 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown20[ 4 ];
};

#if defined( __cplusplus )
}
#endif

#endif

