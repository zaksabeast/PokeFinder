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

#ifndef TRANSLATOR_HPP
#define TRANSLATOR_HPP

#include <Core/Util/Global.hpp>
#include <QString>

enum Game : u16;

namespace Translator
{
    void init(const QString &locale);
    QStringList getCharacteristic();
    QStringList getNatures();
    QString getNature(u8 nature);
    QStringList getHiddenPowers();
    QString getHiddenPower(u8 power);
    QString getSpecies(u16 specie);
    QStringList getSpecies(const QVector<u16> &nums);
    QString getGender(u8 gender);
    QStringList getLocations(const QVector<u8> &nums, Game game);
    QString getKeypress(u8 keypress);
    QString getKeypresses(u16 keypresses);
}

#endif // TRANSLATOR_HPP
