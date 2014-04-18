/*
 * Executable information functions
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

#if !defined( _LIBAGDB_INTERNAL_EXECUTABLE_INFORMATION_H )
#define _LIBAGDB_INTERNAL_EXECUTABLE_INFORMATION_H

#include <common.h>
#include <types.h>

#include "libagdb_extern.h"
#include "libagdb_io_handle.h"
#include "libagdb_libbfio.h"
#include "libagdb_libcerror.h"
#include "libagdb_libfdata.h"
#include "libagdb_types.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct libagdb_internal_executable_information libagdb_internal_executable_information_t;

struct libagdb_internal_executable_information
{
	/* The (executable) filename
	 */
	uint8_t *filename;

	/* The (executable) filename size
	 */
	uint32_t filename_size;
};

int libagdb_executable_information_initialize(
     libagdb_executable_information_t **executable_information,
     libcerror_error_t **error );

LIBAGDB_EXTERN \
int libagdb_executable_information_free(
     libagdb_executable_information_t **executable_information,
     libcerror_error_t **error );

int libagdb_internal_executable_information_free(
     libagdb_internal_executable_information_t **executable_information,
     libcerror_error_t **error );

ssize_t libagdb_executable_information_read(
         libagdb_executable_information_t *executable_information,
         libfdata_stream_t *uncompressed_data_stream,
         libbfio_handle_t *executable_io_handle,
         libagdb_io_handle_t *io_handle,
         off64_t executable_offset,
         uint32_t executable_index,
         libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif

