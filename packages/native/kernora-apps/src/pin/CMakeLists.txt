# SPDX-FileCopyrightText: 2026 Lumo contributors
# SPDX-License-Identifier: GPL-2.0-or-later

add_executable(kernora-pin pin.c)
target_link_libraries(kernora-pin PRIVATE PkgConfig::LIBCRYPT)
install(TARGETS kernora-pin DESTINATION libexec)
install(FILES kernora-pin.pam-config DESTINATION ${KDE_INSTALL_DATADIR}/pam-configs RENAME kernora-pin)
install(FILES org.kernora.pin.policy DESTINATION ${KDE_INSTALL_DATADIR}/polkit-1/actions)
