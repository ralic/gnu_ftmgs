/*----------------------------------------------------------------------------*/
/* Copyright (c) 2012 Vicente Benjumea, University of Malaga, Spain           */
/*                                                                            */
/* This file is part of the <FTMGS> Library                                   */
/*                                                                            */
/* This library is free software: you can redistribute it and/or              */
/* modify it under the terms of the GNU Lesser General Public                 */
/* License as published by the Free Software Foundation, either               */
/* version 2.1 of the License, or (at your option) any later                  */
/* version.                                                                   */
/*                                                                            */
/* This library is distributed in the hope that it will be useful,            */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of             */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the               */
/* GNU Lesser General Public License for more details.                        */
/*                                                                            */
/* You should have received a copy of the GNU Lesser General                  */
/* Public License along with this library. If not, see                        */
/* <http://www.gnu.org/licenses/>.                                            */
/*----------------------------------------------------------------------------*/
/* 
 * System Dependencies
 */
/*----------------------------------------------------------------------------*/
#ifndef umalccvbg_system_rnd_h__
#define umalccvbg_system_rnd_h__	1
/*----------------------------------------------------------------------------*/
#ifdef __cplusplus
extern "C" {
#endif
	/*------------------------------------------------------------------------*/
	/**
	 * Generates random bytes from an entropy source.
	 * 
	 * @param[out]     dst          output buffer
	 * @param[in]      maxlen       requested length of random bytes
	 * @param[in,out]  entropy_src  source of entropy
	 *                                 - 0: True entropy
	 *                                 - 1: Pseudo entropy
	 *                                 - 2: No entropy at all
	 * @return the actual length (in bytes) of the generated random bytes
	 */
	unsigned entropy(void* dst, unsigned maxlen, unsigned entropy_src);
	/*------------------------------------------------------------------------*/
	/**
	 * Generates nonce bytes (from system clock and process id)
	 * 
	 * @param[out]     dst          output buffer
	 * @param[in]      maxlen       requested length of bytes
	 * @return the actual length (in bytes) of the generated bytes
	 */
	unsigned nonce(void* dst, unsigned maxlen);
	/*------------------------------------------------------------------------*/
#ifdef __cplusplus
}
#endif
#endif
