/*
 * This file is part of PokéFinder
 * Copyright (C) 2017-2020 by Admiral_Fish, bumba, and EzPzStreamz
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef GENERATOR5_HPP
#define GENERATOR5_HPP

#include <Core/Parents/Frames/StationaryFrame.hpp>
#include <Core/Parents/Generators/StationaryGenerator.hpp>

enum Encounter : u8;

class StationaryGenerator5 : public StationaryGenerator
{
public:
    StationaryGenerator5() = default;
    StationaryGenerator5(u32 initialFrame, u32 maxResults, u16 tid, u16 sid, u8 genderRatio, Method method, Encounter encounter,
                         const FrameFilter &filter);
    QVector<StationaryFrame> generate(u64 seed) const;

private:
    u8 idBit;
    Encounter encounter;

    QVector<StationaryFrame> generateRoamerIVs(u64 seed) const;
    QVector<StationaryFrame> generateIVs(u64 seed) const;
    QVector<StationaryFrame> generateRoamerCGear(u64 seed) const;
    QVector<StationaryFrame> generateCGear(u64 seed) const;
    QVector<StationaryFrame> generateStationary(u64 seed) const;
    QVector<StationaryFrame> generateRoamer(u64 seed);
    QVector<StationaryFrame> generateGift(u64 seed);
    QVector<StationaryFrame> generateEntraLink(u64 seed);
    QVector<StationaryFrame> generateLarvestaEgg(u64 seed);
    QVector<StationaryFrame> generateHiddenGrotto(u64 seed);
};

#endif // GENERATOR5_HPP
