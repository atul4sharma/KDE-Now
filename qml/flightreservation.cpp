/*
 * Copyright (C) 2016  Aditya Dev Sharma <aditya.sharma156696@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#include "flightreservation.h"

FlightReservation::FlightReservation(QObject* parent): QObject(parent)
{

}

void FlightReservation::setMap(QVariantMap map)
{
    m_map = map;
}


QString FlightReservation::reservationNumber() const
{
    return m_map.value("reservationNumber").toString();
}

QString FlightReservation::name() const
{
    return m_map.value("name").toString();
}

QString FlightReservation::flight() const
{
    return m_map.value("flight").toString();
}

QString FlightReservation::departureAirportName() const
{
    return m_map.value("departureAirportName").toString();
}

QString FlightReservation::departureAirportCode() const
{
    return m_map.value("departureAirportCode").toString();
}

QString FlightReservation::departureDate() const
{
    return m_map.value("departureDate").toString();
}

QString FlightReservation::departureTime() const
{
    return m_map.value("departureTime").toString();
}

QString FlightReservation::arrivalAirportName() const
{
    return m_map.value("arrivalAirportName").toString();
}

QString FlightReservation::arrivalAirportCode() const
{
    return m_map.value("arrivalAirportCode").toString();
}

QString FlightReservation::arrivalDate() const
{
    return m_map.value("arrivalDate").toString();
}

QString FlightReservation::arrivalTime() const
{
    return m_map.value("arrivalTime").toString();
}
