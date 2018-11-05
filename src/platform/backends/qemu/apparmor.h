/*
 * Copyright (C) 2018 Canonical, Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef APPARMOR_H
#define APPARMOR_H

#include <QByteArray>

struct aa_kernel_interface;

namespace multipass
{

class AppArmor
{
public:
    AppArmor();
    ~AppArmor();

    void load_policy(const QByteArray& policy) const;
    void replace_policy(const QByteArray& policy) const;
    void remove_policy(const QByteArray &policy_name) const;

private:
    aa_kernel_interface *aa_interface;
};

} // namespace multipass

#endif // APPARMOR_H
