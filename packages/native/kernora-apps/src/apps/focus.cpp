// SPDX-FileCopyrightText: 2026 Lumo contributors
// SPDX-License-Identifier: GPL-2.0-or-later

#include "host.h"

static KLocalizedString displayName()
{
    return ki18nc("@title application name", "Focus");
}

int main(int argc, char **argv)
{
    static const Kernora::Application application{"kernora-focus", "org.kernora.focus", "focus", "org.kernora.focus", true};
    return Kernora::run(argc, argv, application, displayName);
}
