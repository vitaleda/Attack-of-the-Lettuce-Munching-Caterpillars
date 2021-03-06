/*
	VitaPong
	Copyright (C) 2016-2017, NamelessGhoul0

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef __AUDIO_H_
#define __AUDIO_H_

void InitialiseSound();
int SoundLoadBackgroundMusic(const char* filename);
void SoundStartBackgroundMusicLoop(int musicIndex);
void SoundStartBackgroundMusic(int musicIndex, int repeats);

int SoundLoadSample(const char* filename);
void SoundPlaySample(int sampleIndex);
void SoundDenitialise();



#endif
