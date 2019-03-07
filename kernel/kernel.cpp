//
// kernel.cpp
//
// Circle - A C++ bare metal environment for Raspberry Pi
// Copyright (C) 2014-2018  R. Stange <rsta2@o2online.de>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
#include "kernel.h"

SphereKernel::SphereKernel (void)
:
	m_Memory (TRUE),
	screen (1000, 500)
{
}

SphereKernel::~SphereKernel (void)
{
}

boolean SphereKernel::Initialize (void)
{
	return screen.Initialize ();
}

TShutdownMode SphereKernel::Run (void)
{

	screen.Write("initializing Sphere Kernel...", 29);

	while (1)
	{

	}

	return ShutdownHalt;
}
