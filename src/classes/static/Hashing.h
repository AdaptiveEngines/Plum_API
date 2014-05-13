#ifndef LBHG_H_INCLUDED
#define LBHG_H_INCLUDED

/*
 * This code was orginally written and developed by the Lux Backend Team
 * at Philadelphia Game Lab:
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 * - Mike Oak
 */

class Hashes{
	public:
	//ADD HASH FUNCTIONS HERE
		static int LBHM2Input(LBHMDS data);
		static int LBHMFindBGT(LBHMDS data);
};

struct LBHMDataSet
{
	int val1;
	int val2;
	int maxR; 
	int maxC;
} typedef MapLocationDS;

#endif // LBHG_H_INCLUDED
