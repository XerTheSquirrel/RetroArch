#if defined(_MSC_VER) && !defined(_XBOX) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
#if (_MSC_VER >= 1700)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#endif
#pragma warning(disable:4566)
#endif

/* Top-Level Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MAIN_MENU,
   "Hauptmenü"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_TAB,
   "Einstellungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FAVORITES_TAB,
   "Favoriten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HISTORY_TAB,
   "Verlauf"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_IMAGES_TAB,
   "Bilder"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MUSIC_TAB,
   "Musik"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_TAB,
   "Erkunden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TAB,
   "Inhalte importieren"
   )

/* Main Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SETTINGS,
   "Schnellmenü"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SETTINGS,
   "Schnell auf alle relevanten Spieleinstellungen zugreifen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_LIST,
   "Core laden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_LIST,
   "Den zu verwendenden Core wählen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_CONTENT_LIST,
   "Inhalt laden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOAD_CONTENT_LIST,
   "Den zu startenden Inhalt wählen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_DISC,
   "Disc laden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOAD_DISC,
   "Eine physische Medien-Disc laden. Zuerst sollte der Core ausgewählt werden (Core laden), welcher mit der Disc genutzt werden soll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DUMP_DISC,
   "Disc dumpen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DUMP_DISC,
   "Physische Medien-Disc auf den internen Speicher dumpen. Sie wird als Abbild gespeichert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLISTS_TAB,
   "Wiedergabelisten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLISTS_TAB,
   "Während der Suche gefundener Inhalt wird hier erscheinen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_CONTENT_LIST,
   "Inhalte importieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ADD_CONTENT_LIST,
   "Wiedergabelisten durchs Scannen von Inhalten erstellen und aktualisieren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHOW_WIMP,
   "Desktop-Menü anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SHOW_WIMP,
   "Öffnet das traditionelle Desktop-Menü."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_DISABLE_KIOSK_MODE,
   "Kiosk-Modus deaktivieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_DISABLE_KIOSK_MODE,
   "Deaktiviert den Kiosk Modus. (Neustart erforderlich)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ONLINE_UPDATER,
   "Erweiterungen, Komponenten und Inhalte für RetroArch herunterladen."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY,
   "Eine Netplay-Sitzung hosten oder einer beitreten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS,
   "Einstellungen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS,
   "Das Programm konfigurieren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INFORMATION_LIST,
   "Informationen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INFORMATION_LIST_LIST,
   "Systeminformationen anzeigen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONFIGURATIONS_LIST,
   "Konfigurationen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONFIGURATIONS_LIST,
   "Konfigurationsdateien erstellen und verwalten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_LIST,
   "Hilfe"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_HELP_LIST,
   "Mehr darüber erfahren, wie Retroarch funktioniert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESTART_RETROARCH,
   "RetroArch neu starten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESTART_RETROARCH,
   "Das Programm neu starten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUIT_RETROARCH,
   "RetroArch beenden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUIT_RETROARCH,
   "Das Programm verlassen."
   )

/* Main Menu > Load Core */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWNLOAD_CORE,
   "Core herunterladen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DOWNLOAD_CORE,
   "Einen Core vom Online Updater herunterladen und installieren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SIDELOAD_CORE_LIST,
   "Core installieren oder wiederherstellen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SIDELOAD_CORE_LIST,
   "Einen Core aus dem Download-Verzeichnis installieren oder wiederherstellen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_START_VIDEO_PROCESSOR,
   "Videoprozessor starten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_START_NET_RETROPAD,
   "Remote-RetroPad starten"
   )

/* Main Menu > Load Content */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FAVORITES,
   "Startverzeichnis"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OPEN_ARCHIVE,
   "Archiv durchsuchen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_ARCHIVE,
   "Archiv laden"
   )

/* Main Menu > Load Content > Playlists */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_FAVORITES,
   "Favoriten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_FAVORITES,
   "Zu 'Favoriten' hinzugefügte Inhalte werden hier angezeigt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_MUSIC,
   "Musik"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_MUSIC,
   "Musik, die zuvor abgespielt wurde, wird hier angezeigt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_IMAGES,
   "Bilder"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_IMAGES,
   "Bilder, die zuvor angezeigt wurden, werden hier erscheinen."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_VIDEO,
   "Videos, die zuvor abgespielt wurden, werden hier angezeigt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_EXPLORE,
   "Erkunden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_EXPLORE,
   "Alle mit der Datenbank übereinstimmenden Inhalte über eine kategorisierte Oberfläche durchsuchen."
   )

/* Main Menu > Online Updater */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_LIST,
   "Core-Downloader"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_INSTALLED_CORES,
   "Installierte Cores aktualisieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_UPDATE_INSTALLED_CORES,
   "Alle installierten Cores auf die neueste verfügbare Version aktualisieren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SWITCH_INSTALLED_CORES_PFD,
   "Cores auf Play-Store-Versionen umstellen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SWITCH_INSTALLED_CORES_PFD,
   "Alle älteren und manuell installierten Cores durch die neuesten Versionen aus dem Play Store ersetzen, sofern verfügbar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAILS_UPDATER_LIST,
   "Vorschaubilder aktualisieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_THUMBNAILS_UPDATER_LIST,
   "Ein komplettes Vorschaubilderpaket für das ausgewählte System herunterladen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PL_THUMBNAILS_UPDATER_LIST,
   "Wiedergabelisten-Vorschaubilder-Updater"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PL_THUMBNAILS_UPDATER_LIST,
   "Vorschaubilder für Einträge in der ausgewählten Wiedergabeliste herunterladen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWNLOAD_CORE_CONTENT,
   "Inhalts-Downloader"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_CORE_INFO_FILES,
   "Core-Infodateien aktualisieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_ASSETS,
   "Zusätzliche Daten aktualisieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_AUTOCONFIG_PROFILES,
   "Controller-Profile aktualisieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_CHEATS,
   "Cheats aktualisieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_DATABASES,
   "Datenbanken aktualisieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_OVERLAYS,
   "Overlays aktualisieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_GLSL_SHADERS,
   "GLSL-Shader aktualisieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_CG_SHADERS,
   "CG-Shader aktualisieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_SLANG_SHADERS,
   "Slang-Shader aktualisieren"
   )

/* Main Menu > Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFORMATION,
   "Core-Informationen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_INFORMATION,
   "Informationen über diese Anwendung/diesen Core ansehen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISC_INFORMATION,
   "Disc-Informationen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISC_INFORMATION,
   "Informationen über eingefügte Media-Discs ansehen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_INFORMATION,
   "Netzwerk-Informationen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETWORK_INFORMATION,
   "Netzwerkschnittstelle(n) und zugehörige IP-Adressen anzeigen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFORMATION,
   "System-Informationen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SYSTEM_INFORMATION,
   "Informationen über dieses Gerät anzeigen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_MANAGER,
   "Datenbankmanager"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DATABASE_MANAGER,
   "Datenbanken betrachten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CURSOR_MANAGER,
   "Suchanfragenmanager"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CURSOR_MANAGER,
   "Vorherige Suchanfragen betrachten."
   )

/* Main Menu > Information > Core Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_CORE_NAME,
   "Core-Name"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_CORE_LABEL,
   "Core-Label"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SYSTEM_NAME,
   "Systemname"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SYSTEM_MANUFACTURER,
   "Systemhersteller"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_CATEGORIES,
   "Kategorien"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_AUTHORS,
   "Autoren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_PERMISSIONS,
   "Berechtigungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_LICENSES,
   "Lizenz(en)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SUPPORTED_EXTENSIONS,
   "Unterstützte Erweiterungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_REQUIRED_HW_API,
   "Benötigte Grafik-API"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MISSING,
   "Fehlt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PRESENT,
   "Vorhanden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REQUIRED,
   "Notwendig"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_LOCK,
   "Installierten Core sperren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_LOCK,
   "Änderungen am aktuell installierten Core verhindern. Kann verwendet werden, um unerwünschte Updates zu vermeiden, wenn Inhalte eine bestimmte Core-Version benötigen (z.B. Arcade-ROM-Sets)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_DELETE,
   "Core löschen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_DELETE,
   "Diesen Core von der Festplatte löschen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_CREATE_BACKUP,
   "Core-Backup"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_CREATE_BACKUP,
   "Eine Sicherungskopie des aktuell installierten Cores erstellen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_RESTORE_BACKUP_LIST,
   "Backup wiederherstellen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_RESTORE_BACKUP_LIST,
   "Eine vorherige Version des Cores aus einer Liste von Sicherungskopien installieren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_DELETE_BACKUP_LIST,
   "Backup löschen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_DELETE_BACKUP_LIST,
   "Eine Datei aus der Liste der Sicherungskopien entfernen."
   )

/* Main Menu > Information > System Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_BUILD_DATE,
   "Build-Datum"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_GIT_VERSION,
   "Git-Version"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_CPU_MODEL,
   "CPU-Modell"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_CPU_FEATURES,
   "CPU-Funktionen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_ARCHITECTURE,
   "CPU-Architektur:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_CORES,
   "CPU-Kerne:"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CPU_CORES,
   "Anzahl der verfügbaren CPU-Kerne."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FRONTEND_IDENTIFIER,
   "Frontend-Kennung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FRONTEND_OS,
   "Frontend-Betriebssystem"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RETRORATING_LEVEL,
   "RetroRating-Stufe"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE,
   "Stromquelle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_VIDEO_CONTEXT_DRIVER,
   "Video-Kontext-Treiber"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_DISPLAY_METRIC_MM_WIDTH,
   "Bildschirmbreite (mm)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_DISPLAY_METRIC_MM_HEIGHT,
   "Bildschirmhöhe (mm)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_DISPLAY_METRIC_DPI,
   "Bildschirm-DPI"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_LIBRETRODB_SUPPORT,
   "LibretroDB-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OVERLAY_SUPPORT,
   "Overlay-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_COMMAND_IFACE_SUPPORT,
   "Befehlsinterface-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_NETWORK_COMMAND_IFACE_SUPPORT,
   "Netzwerkbefehlsschnittstellen-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_NETWORK_REMOTE_SUPPORT,
   "Netzwerkcontroller-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_COCOA_SUPPORT,
   "Cocoa-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RPNG_SUPPORT,
   "PNG-Unterstützung (RPNG)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RJPEG_SUPPORT,
   "JPEG-Unterstützung (RJPEG)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RBMP_SUPPORT,
   "BMP-Unterstützung (RBMP)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RTGA_SUPPORT,
   "TGA-Unterstützung (RTGA)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_SDL_SUPPORT,
   "SDL-1.2-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_SDL2_SUPPORT,
   "SDL-2-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_VULKAN_SUPPORT,
   "Vulkan-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_METAL_SUPPORT,
   "Metal-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OPENGL_SUPPORT,
   "OpenGL-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OPENGLES_SUPPORT,
   "OpenGL-ES-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_THREADING_SUPPORT,
   "Threading-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_KMS_SUPPORT,
   "KMS/EGL-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_UDEV_SUPPORT,
   "udev-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OPENVG_SUPPORT,
   "OpenVG-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_EGL_SUPPORT,
   "EGL-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_X11_SUPPORT,
   "X11-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_WAYLAND_SUPPORT,
   "Wayland-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_XVIDEO_SUPPORT,
   "XVideo-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_ALSA_SUPPORT,
   "ALSA-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OSS_SUPPORT,
   "OSS-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OPENAL_SUPPORT,
   "OpenAL-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OPENSL_SUPPORT,
   "OpenSL-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RSOUND_SUPPORT,
   "RSound-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_ROARAUDIO_SUPPORT,
   "RoarAudio-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_JACK_SUPPORT,
   "JACK-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_PULSEAUDIO_SUPPORT,
   "PulseAudio-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_COREAUDIO_SUPPORT,
   "CoreAudio-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_COREAUDIO3_SUPPORT,
   "CoreAudio-V3-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_DSOUND_SUPPORT,
   "DirectSound-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_WASAPI_SUPPORT,
   "WASAPI-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_XAUDIO2_SUPPORT,
   "XAudio2-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_ZLIB_SUPPORT,
   "zlib-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_7ZIP_SUPPORT,
   "7zip-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_DYLIB_SUPPORT,
   "Unterstützung für dynamische Bibliotheken"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_DYNAMIC_SUPPORT,
   "Dymanisches Laden der libretro-Bilbiothek zur Laufzeit"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_CG_SUPPORT,
   "Cg-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_GLSL_SUPPORT,
   "GLSL-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_HLSL_SUPPORT,
   "HLSL-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_SDL_IMAGE_SUPPORT,
   "SDL-Image-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FFMPEG_SUPPORT,
   "FFmpeg-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_MPV_SUPPORT,
   "mpv-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_CORETEXT_SUPPORT,
   "CoreText-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FREETYPE_SUPPORT,
   "FreeType-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_STB_TRUETYPE_SUPPORT,
   "STB-TrueType-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_NETPLAY_SUPPORT,
   "Netplay-Unterstützung (Peer-to-Peer)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_PYTHON_SUPPORT,
   "Python-Unterstützung (Script-Unterstützung in Shadern)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_V4L2_SUPPORT,
   "Video4Linux2-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_LIBUSB_SUPPORT,
   "libusb-Unterstützung"
   )

/* Main Menu > Information > Database Manager */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_SELECTION,
   "Datenbankauswahl"
   )

/* Main Menu > Information > Database Manager > Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_DESCRIPTION,
   "Beschreibung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_PUBLISHER,
   "Herausgeber"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_DEVELOPER,
   "Entwickler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_ORIGIN,
   "Herkunft"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_TGDB_RATING,
   "TGDB-Bewertung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_FAMITSU_MAGAZINE_RATING,
   "Famitsu-Magazine-Bewertung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_EDGE_MAGAZINE_REVIEW,
   "Edge-Magazine-Testbericht"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_EDGE_MAGAZINE_RATING,
   "Edge-Magazine-Bewertung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_EDGE_MAGAZINE_ISSUE,
   "Edge-Magazine-Ausgabe"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_RELEASE_MONTH,
   "Veröffentlichungsmonat"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_RELEASE_YEAR,
   "Veröffentlichungsjahr"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_BBFC_RATING,
   "BBFC-Bewertung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_ESRB_RATING,
   "ESRB-Bewertung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_ELSPA_RATING,
   "ELSPA-Bewertung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_PEGI_RATING,
   "PEGI-Bewertung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_ENHANCEMENT_HW,
   "Hardware-Erweiterungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_CERO_RATING,
   "CERO-Bewertung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_SERIAL,
   "Seriennummer"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_ANALOG,
   "Analog unterstützt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_RUMBLE,
   "Vibration unterstützt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_COOP,
   "Co-op unterstützt"
   )

/* Main Menu > Configuration File */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONFIGURATIONS,
   "Konfgurationsdatei laden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESET_TO_DEFAULT_CONFIG,
   "Auf Standardwerte zurücksetzen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESET_TO_DEFAULT_CONFIG,
   "Die momentane Konfiguration auf die Standardwerte zurücksetzen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_CURRENT_CONFIG,
   "Aktuelle Konfiguration speichern"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_NEW_CONFIG,
   "Neue Konfiguration speichern"
   )

/* Main Menu > Help */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_CONTROLS,
   "Grundlegende Menüsteuerung"
   )

/* Main Menu > Help > Basic Menu Controls */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_SCROLL_UP,
   "Nach oben scrollen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_SCROLL_DOWN,
   "Nach unten scrollen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_CONFIRM,
   "Bestätigen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_TOGGLE_MENU,
   "Menü ein-/ausschalten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_QUIT,
   "Beenden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_TOGGLE_KEYBOARD,
   "Tastatur ein-/ausschalten"
   )

/* Settings */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DRIVER_SETTINGS,
   "Treiber"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DRIVER_SETTINGS,
   "Die von diesem System verwendeten Treiber ändern."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SETTINGS,
   "Videoausgabe-Einstellungen anpassen."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_SETTINGS,
   "Audioausgabe-Einstellungen anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_SETTINGS,
   "Eingabe"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_SETTINGS,
   "Einstellungen für Joypads, Tastaturen und Mäuse anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LATENCY_SETTINGS,
   "Latenz"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LATENCY_SETTINGS,
   "Einstellungen für Video-, Audio- und Eingabelatenz anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_SETTINGS,
   "Cores"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_SETTINGS,
   "Core-Einstellungen anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONFIGURATION_SETTINGS,
   "Konfigurationen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONFIGURATION_SETTINGS,
   "Die Standard-Einstellungen für Konfigurationsdateien ändern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVING_SETTINGS,
   "Speichern"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVING_SETTINGS,
   "Einstellungen der Speicherfunktion anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOGGING_SETTINGS,
   "Protokollierung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOGGING_SETTINGS,
   "Logging-Einstellungen anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_FILE_BROWSER_SETTINGS,
   "Dateibrowser"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_FILE_BROWSER_SETTINGS,
   "Passt die Dateibrowser-Einstellungen an."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAME_THROTTLE_SETTINGS,
   "Bildwiederholrate begrenzen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRAME_THROTTLE_SETTINGS,
   "Einstellungen für Zurückspulen, Zeitraffer und Zeitlupe anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORDING_SETTINGS,
   "Aufnahme"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RECORDING_SETTINGS,
   "Einstellungen für die Aufnahme-Funktion anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONSCREEN_DISPLAY_SETTINGS,
   "Bildschirmanzeige"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ONSCREEN_DISPLAY_SETTINGS,
   "Einstellungen für Overlays, Bildschirmtastatur und Benachrichtigungen anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USER_INTERFACE_SETTINGS,
   "Benutzeroberfläche"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_USER_INTERFACE_SETTINGS,
   "Benutzeroberlächen-Einstellungen anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_SETTINGS,
   "KI-Dienst"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_SETTINGS,
   "Einstellungen für den KI-Dienst anpassen (Übersetzung/TTS/Sonstiges)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCESSIBILITY_SETTINGS,
   "Bedienungshilfe"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACCESSIBILITY_SETTINGS,
   "Einstellungen für das Vorlesen von Text anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_POWER_MANAGEMENT_SETTINGS,
   "Energieverwaltung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_POWER_MANAGEMENT_SETTINGS,
   "Energieverwaltungseinstellungen anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RETRO_ACHIEVEMENTS_SETTINGS,
   "Errungenschaften"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RETRO_ACHIEVEMENTS_SETTINGS,
   "Einstellungen für Errungenschaften anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_SETTINGS,
   "Netzwerk"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETWORK_SETTINGS,
   "Server- und Netzwerkeinstellungen anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SETTINGS,
   "Wiedergabelisten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SETTINGS,
   "Wiedergabelisteneinstellungen anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USER_SETTINGS,
   "Benutzer"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_USER_SETTINGS,
   "Konten, Benutzername, Sprache."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_SETTINGS,
   "Verzeichnisse"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DIRECTORY_SETTINGS,
   "Die Standard-Verzeichnisse für dieses System ändern."
   )

/* Settings > Drivers */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DRIVER,
   "Eingabetreiber"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_DRIVER,
   "Zu verwendender Eingabetreiber. Einige Videotreiber können einen anderen Eingabetreiber erzwingen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_JOYPAD_DRIVER,
   "Kontrollertreiber"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_JOYPAD_DRIVER,
   "Zu verwendender Kontrollertreiber."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DRIVER,
   "Videotreiber"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_DRIVER,
   "Zu verwendender Videotreiber."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_DRIVER,
   "Audiotreiber"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_DRIVER,
   "Zu verwendender Audiotreiber."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_RESAMPLER_DRIVER,
   "Audio-Resampling-Treiber"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_RESAMPLER_DRIVER,
   "Zu verwendender Audio-Resampling-Treiber."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CAMERA_DRIVER,
   "Kameratreiber"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CAMERA_DRIVER,
   "Zu verwendender Kameratreiber."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BLUETOOTH_DRIVER,
   "Bluetooth-Treiber"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BLUETOOTH_DRIVER,
   "Zu verwendender Bluetooth-Treiber."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_WIFI_DRIVER,
   "WLAN-Treiber"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_WIFI_DRIVER,
   "Zu verwendender WLAN-Treiber."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOCATION_DRIVER,
   "Standort-Treiber"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOCATION_DRIVER,
   "Zu verwendender Treiber für Ortsdienste."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_DRIVER,
   "Menütreiber"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_DRIVER,
   "Zu verwendender Menütreiber."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_DRIVER,
   "Aufnahmetreiber"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RECORD_DRIVER,
   "Zu verwendender Aufnahmetreiber."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIDI_DRIVER,
   "MIDI-Treiber"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIDI_DRIVER,
   "Zu verwendender MIDI-Treiber."
   )

/* Settings > Video */

MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCHRES_SETTINGS,
   "Native Signale mit niedgriger Auflösung ausgeben, welche mit CRT-Bildschirmen benutzt werden können."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_OUTPUT_SETTINGS,
   "Ausgabe"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_OUTPUT_SETTINGS,
   "Videoausgabe-Einstellungen anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FULLSCREEN_MODE_SETTINGS,
   "Vollbildmodus"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FULLSCREEN_MODE_SETTINGS,
   "Vollbildeinstellungen ändern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOWED_MODE_SETTINGS,
   "Fenstermodus"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOWED_MODE_SETTINGS,
   "Fenstermodus-Einstellungen anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SCALING_SETTINGS,
   "Skalierung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SCALING_SETTINGS,
   "Einstellungen der Videoskalierung anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SYNCHRONIZATION_SETTINGS,
   "Synchronisation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SYNCHRONIZATION_SETTINGS,
   "Einstellungen der Videosynchronisation anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SUSPEND_SCREENSAVER_ENABLE,
   "Bildschirmschoner unterdrücken"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SUSPEND_SCREENSAVER_ENABLE,
   "Verhindert, dass der Bildschirmschoner des Systems aktiviert wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_THREADED,
   "Video in separatem Thread"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_THREADED,
   "Verbessert die Leistung, führt aber zu größerer Latenz und kann Ruckeln verursachen. Nur dann verwenden, wenn ansonsten die gewünschte Leistung nicht erreicht wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_BLACK_FRAME_INSERTION,
   "Schwarzes Bild einfügen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_BLACK_FRAME_INSERTION,
   "Fügt ein schwarzes Bild zwischen den Einzelbildern ein. Nützlich auf einigen Bildschirmen mit hoher Bildwiederholfrequenz, um Ghosting zu vermeiden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_GPU_SCREENSHOT,
   "GPU-Screenshot"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_GPU_SCREENSHOT,
   "Nimmt GPU-Shader-Effekte in Screenshots mit auf, sofern verfügbar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SMOOTH,
   "Bilineare Filterung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SMOOTH,
   "Wendet eine leichte Unschärfe auf das Bild an, um die Pixelkanten etwas zu glätten. Diese Option hat einen sehr geringen Einfluss auf die Leistung."
   )
#if defined(DINGUX)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DINGUX_IPU_FILTER_TYPE,
   "Bildinterpolation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_DINGUX_IPU_FILTER_TYPE,
   "Bestimmt die Bildinterpolationsmethode, die beim Skalieren von Inhalten über die interne IPU verwendet wird. Bei Verwendung von CPU-gestützten Videofiltern wird 'Bikubisch' oder 'Bilinear' empfohlen. Diese Einstellung hat keine Auswirkung auf die Performance."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DINGUX_IPU_FILTER_BICUBIC,
   "Bikubisch"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DINGUX_IPU_FILTER_NEAREST,
   "Nächste-Nachbarn"
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_DELAY,
   "Auto-Shader-Verzögerung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_DELAY,
   "Verzögert das automatische Laden von Shadern (in ms). Kann grafische Fehler beim Verwenden von 'Bildschirmaufnahme'-Software beheben."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FILTER,
   "Videofilter"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FILTER,
   "Einen CPU-gestützten Videofilter anwenden.\nHINWEIS: Kann mit hohen Leistungskosten verbunden sein. Einige Videofilter funktionieren möglicherweise nur mit Cores, die 32-Bit- oder 16-Bit-Farben verwenden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FILTER_REMOVE,
   "Videofilter entfernen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FILTER_REMOVE,
   "Alle aktiven CPU-gestützten Videofilter deaktivieren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_NOTCH_WRITE_OVER,
   "Bild auf Android-Geräten über die Bildschirmaussparung strecken"
)

/* Settings > Video > CRT SwitchRes */

MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_RESOLUTION,
   "Nur für CRT-Bildschirme. Versucht die exakte Core-/Spielauflösung und Bildwiedeholfrequenz zu verwenden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCH_RESOLUTION_SUPER,
   "CRT-Superauflösung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_RESOLUTION_SUPER,
   "Zwischen nativer und ultraweiter Superauflösung umschalten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCH_X_AXIS_CENTERING,
   "X-Achsenzentrierung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_X_AXIS_CENTERING,
   "Versuche eine dieser Einstellungen, wenn das Bild nicht richtig auf dem Bildschirm zentriert ist."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCH_PORCH_ADJUST,
   "Schwarzschultern anpassen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_PORCH_ADJUST,
   "Versuche eine dieser Einstellungen, um die Schwarzschultern anzupassen und die Bildgröße zu ändern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCH_RESOLUTION_USE_CUSTOM_REFRESH_RATE,
   "Benutzerdefinierte Signalfrequenz verwenden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_RESOLUTION_USE_CUSTOM_REFRESH_RATE,
   "Eine in der Konfigurationsdatei definierte Signalfrequenz verwenden."
   )

/* Settings > Video > Output */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MONITOR_INDEX,
   "Monitor-Index"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MONITOR_INDEX,
   "Wält den Bildschirm aus, der für RetroArch verwendet wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ROTATION,
   "Bildrotation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_ROTATION,
   "Erzwingt eine bestimmte Bildrotation. Diese Drehung wird zu den durch den Core festgelegten Drehungen hinzugefügt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCREEN_ORIENTATION,
   "Bildschirmausrichtung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SCREEN_ORIENTATION,
   "Erzwingt eine bestimmte Ausrichtung des Bildschirms durch das Betriebssystem."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_GPU_INDEX,
   "GPU-Index"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_REFRESH_RATE,
   "Vertikale Signalfrequenz"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_REFRESH_RATE,
   "Vertikale Signalfrequenz des Bildschirms. Wird verwendet, um eine passende Audioeingangsrate zu berechnen.\nHINWEIS: Dies wird ignoriert, wenn 'Video in separatem Thread' aktiviert ist."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_REFRESH_RATE_AUTO,
   "Geschätzte Bildwiederholfrequenz"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_REFRESH_RATE_AUTO,
   "Die geschätzte Bildwiederholfrequenz des Bildschirms in Hz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_REFRESH_RATE_POLLED,
   "Bildschrim-eigene Wiederholfrequenz"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_REFRESH_RATE_POLLED,
   "Vom Displaytreiber angegebene Bildwiederholfrequenz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FORCE_SRGB_DISABLE,
   "Deaktivierung des sRGB FBO erzwingen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FORCE_SRGB_DISABLE,
   "Die Deaktivierung der Unterstützung für sRGB FBO erzwingen. Einige Intel OpenGL-Treiber verursachen unter Windows Probleme, wenn sRGB FBO aktiviert ist. Diese Einstellung kann dies beheben."
   )

/* Settings > Video > Fullscreen Mode */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FULLSCREEN,
   "Vollbildmodus"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FULLSCREEN,
   "Im Vollbildmodus starten. Kann zur Laufzeit geändert werden. Kann durch einen Befehlszeilenschalter überschrieben werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOWED_FULLSCREEN,
   "Randloses Fenster im Vollbild"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOWED_FULLSCREEN,
   "Realisation des Vollbildmodus mit einem randlosen Fenster bevorzugen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FULLSCREEN_X,
   "Vollbildbreite"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FULLSCREEN_X,
   "Benutzerdefinierte Bildbreite für den Vollbildmodus. Wird dieser Wert auf 0 belassen, wird die Desktop-Auflösung verwendet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FULLSCREEN_Y,
   "Vollbildhöhe"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FULLSCREEN_Y,
   "Benutzerdefinierte Bildhöhe für den Vollbildmodus. Wird dieser Wert auf 0 belassen, wird die Desktop-Auflösung verwendet."
   )

/* Settings > Video > Windowed Mode */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SCALE,
   "Skalierung im Fenstermodus"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOW_SCALE,
   "Legt die Fenstergröße relativ zu der Core-Bildgröße fest. Alternativ kann weiter unten die Höhe und Breite des Fensters festgelegt werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_OPACITY,
   "Fenster-Deckkraft"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_SHOW_DECORATIONS,
   "Fensterdekorationen anzeigen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_SAVE_POSITION,
   "Fensterposition und -größe merken"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOW_SAVE_POSITION,
   "Fenstergröße und -position merken. Diese Einstellung hat Vorrang vor Skalierung im Fenstermodus."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_WIDTH,
   "Fensterbreite"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOW_WIDTH,
   "Benutzerdefinierte Fensterbreite."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_HEIGHT,
   "Fensterhöhe"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOW_HEIGHT,
   "Benutzerdefinierte Fensterhöhe."
   )

/* Settings > Video > Scaling */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SCALE_INTEGER,
   "Ganzzahlige Skalierung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SCALE_INTEGER,
   "Skaliere das Bild in ganzzahligen Schritten. Die Basisgröße hängt von der vom System gemeldeten Geometrie und dem Seitenverhältnis ab. Wenn 'Seitenverhältnis erzwingen' nicht gewählt ist, werden Höhe u. Breite unabhängig skaliert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ASPECT_RATIO_INDEX,
   "Bildseitenverhältnis"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ASPECT_RATIO,
   "Benutzerdefiniertes Seitenverhältnis"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_ASPECT_RATIO,
   "Gleitkomma-Wert für das Seitenverhältnis (Breite / Höhe). Wird verwendet, wenn das Bildseitenverhältnis auf 'Benutzerdefiniertes Seitenverhältnis' eingestellt ist."
   )
#if defined(DINGUX)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DINGUX_IPU_KEEP_ASPECT,
   "Seitenverhältnis beibehalten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_DINGUX_IPU_KEEP_ASPECT,
   "1:1 Pixelseitenverhältnis beibehalten wenn der Inhalt über die interne IPU skaliert wird. Wenn deaktiviert, wird das Bild auf die gesamte Anzeige gestreckt."
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VIEWPORT_CUSTOM_X,
   "X-Position des Bildes"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_VIEWPORT_CUSTOM_X,
   "Benutzerdefinierter Versatz des Ansichtsfensters, welcher die X-Achsenposition definiert. Dieser wird ignoriert, wenn 'Ganzzahlige Skalierung' aktiviert ist."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VIEWPORT_CUSTOM_Y,
   "Y-Position des Bildes"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_VIEWPORT_CUSTOM_Y,
   "Benutzerdefinierter Versatz des Ansichtsfensters, welcher die Y-Achsenposition definiert. Dieser wird ignoriert, wenn 'Ganzzahlige Skalierung' aktiviert ist."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VIEWPORT_CUSTOM_WIDTH,
   "Bildbreite"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_VIEWPORT_CUSTOM_WIDTH,
   "Benutzerdefinierte Ansichtsfensterbreite, die verwendet wird, wenn das Bildseitenverhältnis auf \"Benutzerdefiniertes Seitenverhältnis\" eingestellt ist."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VIEWPORT_CUSTOM_HEIGHT,
   "Bildhöhe"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_VIEWPORT_CUSTOM_HEIGHT,
   "Benutzerdefinierte Ansichtsfensterhöhe, die verwendet wird, wenn das Bildseitenverhältnis auf \"Benutzerdefiniertes Seitenverhältnis\" eingestellt ist."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_CROP_OVERSCAN,
   "Overscan abschneiden (Neustart erforderlich)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_CROP_OVERSCAN,
   "Schneidet einige Pixel an den Bildrändern ab, die üblicherweise von Entwicklern leer gelassen werden und manchmal auch fehlerhafte Pixel enthalten."
   )

/* Settings > Video > Synchronization */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VSYNC,
   "Vertikale Synchronisation (VSync)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_VSYNC,
   "Synchronisiert die Video-Ausgabe der Grafikkarte mit der Bildwiederholrate des Bildschirms. Empfohlen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SWAP_INTERVAL,
   "VSync-Intervall"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SWAP_INTERVAL,
   "Verwendet ein benutzerdefiniertes Intervall für VSync. Dies halbiert effektiv die Bildschirm-Wiederholfrequenz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ADAPTIVE_VSYNC,
   "Adaptives VSync"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_ADAPTIVE_VSYNC,
   "VSync bleibt aktiviert, bis die Leistung unter die Ziel-Wiederholfrequenz fällt. Kann energieeffizienter sein und Ruckeln minimieren, wenn die Leistung unter Echtzeit fällt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FRAME_DELAY,
   "Bildverzögerung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FRAME_DELAY,
   "Reduziert Latenz, kann aber zu Ruckeln führen. Fügt eine Verzögerung nach VSync hinzu (in ms)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_HARD_SYNC,
   "GPU und CPU synchronisieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_HARD_SYNC,
   "Feste Synchronisation der CPU und der GPU. Reduziert Latenz auf Kosten der Leistung."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_HARD_SYNC_FRAMES,
   "Anzahl der Frames für GPU-CPU-Sync"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_HARD_SYNC_FRAMES,
   "Anzahl der Bilder, um die die CPU der GPU voraus sein darf, wenn die GPU/CPU-Synchronisation aktiviert ist."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VRR_RUNLOOP_ENABLE,
   "Mit genauer Inhaltsframerate synchronisieren (G-Sync, FreeSync)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VRR_RUNLOOP_ENABLE,
   "Keine Abweichung vom Core angefragten Timing. Nützlich für Bildschirme mit variabler Synchronisierung (G-Sync, FreeSync, HDMI 2.1 VRR)."
   )

/* Settings > Audio */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_OUTPUT_SETTINGS,
   "Ausgabe"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_OUTPUT_SETTINGS,
   "Audioausgabe-Einstellungen anpassen."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_RESAMPLER_SETTINGS,
   "Audio-Resampler-Einstellungen anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_SYNCHRONIZATION_SETTINGS,
   "Synchronisation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_SYNCHRONIZATION_SETTINGS,
   "Einstellungen der Audiosynchronisation anpassen."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIDI_SETTINGS,
   "MIDI-Einstellungen anpassen."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_MIXER_SETTINGS,
   "Audiomixer-Einstellungen anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SOUNDS,
   "Menü-Töne"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_MUTE,
   "Stummschalten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_MUTE,
   "Audio stummschalten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_MIXER_MUTE,
   "Mixer stummschalten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_MIXER_MUTE,
   "Mixer-Audio stummschalten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_FASTFORWARD_MUTE,
   "Stummschalten bei Zeitraffer"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_FASTFORWARD_MUTE,
   "Audio automatisch stummschalten, wenn Zeitraffer verwendet wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_VOLUME,
   "Lautstärkeanpassung (dB)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_VOLUME,
   "Lautstärkeanpassung in dB. 0 dB ist die normale Lautstärke."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_MIXER_VOLUME,
   "Lautstärkeanpassung des Mixers (dB)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_MIXER_VOLUME,
   "Globale Lautstärkeanpassung des Audio-Mixers (in dB). 0 dB ist die normale Lautstärke."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_DSP_PLUGIN,
   "DSP-Plugin"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_DSP_PLUGIN,
   "Audio-DSP-Plugin, welches die Audiodaten verarbeitet, bevor sie an den Treiber gesendet werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_DSP_PLUGIN_REMOVE,
   "DSP-Plugin entfernen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_DSP_PLUGIN_REMOVE,
   "Alle aktiven Audio-DSP-Plugins deaktivieren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_WASAPI_EXCLUSIVE_MODE,
   "Exklusiver WASAPI-Modus"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_WASAPI_EXCLUSIVE_MODE,
   "Dem WASAPI-Treiber erlauben, die vollständige Kontrolle über das Audio-Gerät zu übernehmen. Wenn deaktiviert, wird der gemeinsame Modus verwendet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_WASAPI_FLOAT_FORMAT,
   "WASAPI-Gleitkomma-Format"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_WASAPI_FLOAT_FORMAT,
   "Gleitkomma-Format für den WASAPI-Treiber verwenden, wenn das Audio-Gerät dies unterstützt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_WASAPI_SH_BUFFER_LENGTH,
   "Größe des gemeinsamen WASAPI-Puffers"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_WASAPI_SH_BUFFER_LENGTH,
   "Zwischenspeicher-Größe (in Frames), wenn der WASAPI-Treiber im gemeinsamen Modus verwendet wird."
   )

/* Settings > Audio > Output */

MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_ENABLE,
   "Die Audio-Ausgabe aktivieren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_DEVICE,
   "Audiogerät"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_DEVICE,
   "Das standardmäßig ausgewählte Audiogerät überschreiben, welches vom Audiotreiber verwendet wird. Dies ist treiberabhängig."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_LATENCY,
   "Audiolatenz (ms)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_LATENCY,
   "Gewünschte Audiolatenz in Millisekunden. Je nach Audiotreiber kann die gewünschte Latenz nicht erzielt werden; diese Einstellung wird dann ignoriert."
   )

/* Settings > Audio > Resampler */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_RESAMPLER_QUALITY,
   "Audio-Resampler-Qualität"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_RESAMPLER_QUALITY,
   "Diesen Wert verkleinern, für bessere Leistung/kleinere Latenz zu Lasten der Audioqualität; erhöhen, für bessere Audioqualität auf Kosten der Leistung/kleinerer Latenz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_OUTPUT_RATE,
   "Ausgaberate (Hz)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_OUTPUT_RATE,
   "Abtastrate der Audio-Ausgabe."
   )

/* Settings > Audio > Synchronization */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_SYNC,
   "Synchronisation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_SYNC,
   "Audio synchronisieren. Empfohlen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_MAX_TIMING_SKEW,
   "Maximaler Audioversatz"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_MAX_TIMING_SKEW,
   "Maximale Änderung der Audio-Eingangsrate. Das Erhöhen dieses Wertes ermöglicht sehr große Änderungen im Timing (beispielsweise um einen PAL-Core auf einem NTSC-Bildschirm darzustellen), verursacht jedoch fehlerhafte Tonhöhen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_RATE_CONTROL_DELTA,
   "Dynamische Audioratensteuerung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_RATE_CONTROL_DELTA,
   "Hilft, Fehler bei der Audio- und Videosynchronisierung auszubügeln. Wenn deaktiviert, ist eine brauchbare Synchronisation nahezu unmöglich."
   )

/* Settings > Audio > MIDI */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIDI_INPUT,
   "Eingabe"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIDI_INPUT,
   "Eingabegerät auswählen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIDI_OUTPUT,
   "Ausgabe"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIDI_OUTPUT,
   "Ausgabegerät auswählen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIDI_VOLUME,
   "Lautstärke"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIDI_VOLUME,
   "Ausgabelautstärke festlegen (%)."
   )

/* Settings > Audio > Mixer Settings > Mixer Stream */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIXER_ACTION_PLAY,
   "Abspielen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIXER_ACTION_PLAY,
   "Startet die Wiedergabe des Audiostreams. Sobald der Vorgang abgeschlossen ist, wird der jetzige Audiostream aus dem Speicher entfernt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIXER_ACTION_PLAY_LOOPED,
   "Abspielen (Schleife)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIXER_ACTION_PLAY_LOOPED,
   "Startet die Wiedergabe des Audiostreams. Sobald der Vorgang abgeschlossen ist, wird dieser erneut von vorne gestartet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIXER_ACTION_PLAY_SEQUENTIAL,
   "Abspielen (Sequenziell)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIXER_ACTION_PLAY_SEQUENTIAL,
   "Startet die Wiedergabe des Audiostreams. Sobald der Vorgang abgeschlossen ist, wird der nächste Stream in sequenzieller Reihenfolge ausgewählt und dieses Verhalten wiederholt. Nützlich als Albumwiedergabemodus."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIXER_ACTION_STOP,
   "Anhalten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIXER_ACTION_STOP,
   "Hält die Wiedergabe des Audiostreams an, aber behält ihn im Speicher. Die Wiedergabe kann durch erneutes 'Abspielen' fortgesetzt werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIXER_ACTION_REMOVE,
   "Entfernen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIXER_ACTION_REMOVE,
   "Beendet die Wiedergabe und entfernt den Audiostream aus dem Speicher."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIXER_ACTION_VOLUME,
   "Lautstärkeanpassung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIXER_ACTION_VOLUME,
   "Lautstärke des Audiostreams anpassen."
   )

/* Settings > Audio > Menu Sounds */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_ENABLE_MENU,
   "Menüaudio"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_ENABLE_MENU,
   "Der Masterswitch für Menütöne."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SOUND_OK,
   "'OK'-Ton aktivieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SOUND_CANCEL,
   "'Abbrechen'-Ton aktivieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SOUND_NOTICE,
   "'Benachrichtungen'-Ton aktivieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SOUND_BGM,
   "'BGM' aktivieren"
   )

/* Settings > Input */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MAX_USERS,
   "Maximale Benutzeranzahl"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_MAX_USERS,
   "Maximale Anzahl von Benutzern, die von RetroArch unterstützt werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_POLL_TYPE_BEHAVIOR,
   "Polling-Verhalten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_POLL_TYPE_BEHAVIOR,
   "Beeinflusst, wie Polling in RetroArch abgefragt wird. Wird dieser Wert auf 'Früh' oder 'Spät' gesetzt, kann sich je nach Konfiguration die Latenz verringern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_REMAP_BINDS_ENABLE,
   "Tasten-Neubelegung für diesen Core"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_REMAP_BINDS_ENABLE,
   "Überschreibt die Eingabebelegung mit der Neubelegung, die für den aktuellen Kern festgelegt wurde."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_AUTODETECT_ENABLE,
   "Automatische Konfiguration"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_AUTODETECT_ENABLE,
   "Konfiguriert automatisch Controller, die ein Profil haben, im Plug-and-Play-Stil."
   )
#if defined(HAVE_DINPUT) || defined(HAVE_WINRAWINPUT)
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_SENSORS_ENABLE,
   "Hilfssensoren-Input"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_SENSORS_ENABLE,
   "Input von Beschleunigungsmesser, Gyroskop und Lichtsensor ermöglichen, sofern dies von der aktuellen Hardware unterstützt wird. Kann auf einigen Plattformen Auswirkungen auf die Leistung haben und/oder den Stromverbrauch erhöhen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_BUTTON_AXIS_THRESHOLD,
   "Analog-zu-digital-Grenzwert"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_BUTTON_AXIS_THRESHOLD,
   "Wie weit eine Achse angesteuert werden muss, um zu einem Tastendruck auszulösen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_DEADZONE,
   "Totzonenregler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_SENSITIVITY,
   "Analogempfindlichkeit"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_BIND_TIMEOUT,
   "Zeitlimit für Belegung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_BIND_TIMEOUT,
   "Zeitdauer in Sekunden, nach der die nächste Tastenbelegung abgefragt wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_BIND_HOLD,
   "Haltezeit für Belegung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_BIND_HOLD,
   "Zeit in Sekunden, für die eine Taste bei der Belegung gehalten werden soll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TURBO_PERIOD,
   "Autofeuer-Frequenz"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_TURBO_PERIOD,
   "Die Zeit (in Frames), wenn die Eingabe mit Turbo aktiviert wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DUTY_CYCLE,
   "Autofeuer-Haltedauer"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_DUTY_CYCLE,
   "Beschreibt, wie lange eine Taste mit aktivierem Turbo-Modus 'gedrückt' wird. Dieser Wert wird in der Anzahl der Einzelbilder angegeben."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TURBO_MODE,
   "Turbo-Modus"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_TURBO_MODE,
   "Wählt das allgemeine Verhalten des Turbo-Modus."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TURBO_DEFAULT_BUTTON,
   "Turbo-Button Standard"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_TURBO_DEFAULT_BUTTON,
   "Standard aktive Taste für Turbo Modus 'Einzelne Taste'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_HAPTIC_FEEDBACK_SETTINGS,
   "Haptisches Feedback (Vibration)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_HAPTIC_FEEDBACK_SETTINGS,
   "Ändere haptische Feedback- und Vibrationseinstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MENU_SETTINGS,
   "Menü-Steuerung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_MENU_SETTINGS,
   "Menü-Steuerungseinstellungen ändern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_HOTKEY_BINDS,
   "Tastenkürzel aktivieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_HOTKEY_BINDS,
   "Konfiguriere Hotkey-Einstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_USER_BINDS,
   "Port %u Kontroller"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_USER_BINDS,
   "Steuerung für diesen Port konfigurieren."
   )

/* Settings > Input > Haptic Feedback/Vibration */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIBRATE_ON_KEYPRESS,
   "Vibration bei Tastendruck"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ENABLE_DEVICE_VIBRATION,
   "Aktiviert Vibration für unterstützte Cores"
   )
#if defined(DINGUX) && defined(HAVE_LIBSHAKE)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DINGUX_RUMBLE_GAIN,
   "Vibrationsintensität (Neustart erforderlich)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_DINGUX_RUMBLE_GAIN,
   "Gibt die Größenordnung der haptischen Feedback-Effekte an."
   )
#endif

/* Settings > Input > Menu Controls */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_UNIFIED_MENU_CONTROLS,
   "Einheitliche Menüsteuerung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_UNIFIED_MENU_CONTROLS,
   "Verwende die selbe Steuerung für das Menü und die Spiele. Betrifft nur Tastatur."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_INPUT_SWAP_OK_CANCEL,
   "Vertausche OK- und Zurück-Tasten im Menü"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_INPUT_SWAP_OK_CANCEL,
   "Vertausche die Tasten für 'OK' und 'Abbrechen'. Wenn deaktiviert, wird die japanische Tastenbelegung verwendet; wenn aktiviert, wird die westliche Tastenbelegung verwendet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ALL_USERS_CONTROL_MENU,
   "Alle Benutzer können das Menü steuern"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_ALL_USERS_CONTROL_MENU,
   "Ermöglicht jedem Benutzer das Menü zu benutzen. Wenn deaktiviert, kann nur Benutzer 1 das Menü benutzen."
   )

/* Settings > Input > Hotkey Binds */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUIT_PRESS_TWICE,
   "Beenden bestätigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUIT_PRESS_TWICE,
   "Benötigt den Hotkey Beenden, um RetroArch zu beenden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MENU_ENUM_TOGGLE_GAMEPAD_COMBO,
   "Controller-Tastenkombination für Menü"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_MENU_ENUM_TOGGLE_GAMEPAD_COMBO,
   "Kontroller-Tastenkombination, mit der das Menü aufgerufen wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_HOTKEY_BLOCK_DELAY,
   "Hotkey Aktivierungsverzögerung (Frames)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_HOTKEY_BLOCK_DELAY,
   "Fügt eine Verzögerung in Frames hinzu, bevor die normale Eingabe nach Drücken (und Halten) der zugewiesenen Taste 'Hotkeys aktivieren' blockiert wird. Ermöglicht die normale Eingabe der 'Hotkeys aktivieren'-Taste, wenn sie einer anderen Aktion zugeordnet ist (z.B. RetroPad 'Select')."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_FAST_FORWARD_KEY,
   "Zeitraffer ein-/ausschalten (umschalten)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_FAST_FORWARD_KEY,
   "Wechselt zwischen Schnellvorwärts- und Normalgeschwindigkeit."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_FAST_FORWARD_HOLD_KEY,
   "Zeitraffer (halten)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_FAST_FORWARD_HOLD_KEY,
   "Aktiviert die schnelle Weiterleitung beim Halten. Inhalte laufen mit normaler Geschwindigkeit, wenn Taste losgelassen wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SLOWMOTION_KEY,
   "Zeitlupe (umschalten)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_SLOWMOTION_KEY,
   "Wechselt zwischen Zeitlupe und Normalgeschwindigkeit."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SLOWMOTION_HOLD_KEY,
   "Zeitlupe (halten)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_SLOWMOTION_HOLD_KEY,
   "Aktiviert Zeitlupe beim Halten. Inhalte laufen mit normaler Geschwindigkeit, wenn Taste losgelassen wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_LOAD_STATE_KEY,
   "Speicherabbild laden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_LOAD_STATE_KEY,
   "Lade ein Abbild aus dem aktuellen Speicherplatz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SAVE_STATE_KEY,
   "Speicherzustand erstellen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_SAVE_STATE_KEY,
   "Sichert einen Zustand in den aktuellen Speicherplatz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_FULLSCREEN_TOGGLE_KEY,
   "Vollbildmodus (Ein-/Ausschalten)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_FULLSCREEN_TOGGLE_KEY,
   "Wechselt zwischen Vollbild- und Fensteranzeigemodus."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CLOSE_CONTENT_KEY,
   "Inhalt schließen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_CLOSE_CONTENT_KEY,
   "Schließt den aktuellen Inhalt. Ungespeicherte Änderungen könnten verloren gehen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_QUIT_KEY,
   "RetroArch beenden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_QUIT_KEY,
   "Schließt RetroArch und stellt sicher, dass alle Speicherdaten und Konfigurationsdateien auf die Festplatte übertragen werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_STATE_SLOT_PLUS,
   "Zustands-Speicherplatz +"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_STATE_SLOT_PLUS,
   "Erhöht den aktuell ausgewählten Speicherzustand-Index."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_STATE_SLOT_MINUS,
   "Zustands-Speicherplatz -"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_STATE_SLOT_MINUS,
   "Verringert die aktuell ausgewählte Save-State Anzahl."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_REWIND,
   "Zurückspulen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_REWIND_HOTKEY,
   "Spult den aktuellen Inhalt zurück, wenn eine Taste gedrückt wird. Rückspulen Unterstützung muss aktiviert sein."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_BSV_RECORD_TOGGLE,
   "Aufnahme Replay (umschalten)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_BSV_RECORD_TOGGLE,
   "Schaltet die Aufnahme von Gameplay-Eingaben im .bsv-Format ein/aus."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_PAUSE_TOGGLE,
   "Pause (umschalten)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_PAUSE_TOGGLE,
   "Schaltet den Inhalt zwischen pausierten und nicht-pausierten States um."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_FRAMEADVANCE,
   "Einzelbildvorlauf"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_FRAMEADVANCE,
   "Beim Pausieren wird der Inhalt um einen Frame erweitert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_RESET,
   "Spiel zurücksetzen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_RESET,
   "Starte den aktuellen Inhalt neu."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SHADER_NEXT,
   "Nächster Shader"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_SHADER_NEXT,
   "Lädt und wendet die nächste Shader-Preset-Datei im Stammverzeichnis des 'Video-Shader'-Verzeichnisses an."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SHADER_PREV,
   "Vorheriger Shader"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_SHADER_PREV,
   "Lädt und wendet die vorherige Shader-Preset-Datei im Stammverzeichnis des 'Video-Shader'-Verzeichnisses an."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_INDEX_PLUS,
   "Nächster Cheat-Index"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_CHEAT_INDEX_PLUS,
   "Erhöht den aktuell ausgewählten Cheat-Index."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_INDEX_MINUS,
   "Vorheriger Cheat-Index"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_CHEAT_INDEX_MINUS,
   "Verringert den aktuell ausgewählten Cheat-Index."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_TOGGLE,
   "Cheats (Ein-/Ausschalten)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_CHEAT_TOGGLE,
   "Schaltet Cheats ein/aus."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SCREENSHOT,
   "Erstelle Bildschirmfoto"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_SCREENSHOT,
   "Fertigt ein Foto des Bildschirms an."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_MUTE,
   "Audio (Stumm-/Lautschalten)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_MUTE,
   "Schaltet die Audioausgabe ein/aus."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_OSK,
   "Bildschirmtastatur (Ein-/Ausschalten)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_OSK,
   "Schaltet die Bildschirmtastatur ein/aus."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_FPS_TOGGLE,
   "FPS anzeigen (umschalten)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_FPS_TOGGLE,
   "Schaltet 'Bilder pro Sekunde' Statusanzeige ein/aus."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SEND_DEBUG_INFO,
   "Sende Debug Infomationen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_SEND_DEBUG_INFO,
   "Sendet diagnostische Informationen über Ihr Gerät und die RetroArch-Konfiguration an unsere Server zur Analyse."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_NETPLAY_HOST_TOGGLE,
   "Netplay Hosting (umschalten)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_NETPLAY_HOST_TOGGLE,
   "Schaltet Netplay-Hosting ein/aus."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_NETPLAY_GAME_WATCH,
   "Netplay Play/Zuschauermodus (umschalten)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_NETPLAY_GAME_WATCH,
   "Schaltet die aktuelle Netzspielsitzung zwischen 'Wiedergabe' und 'Zuschauer' um."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_ENABLE_HOTKEY,
   "Hotkeys aktivieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_ENABLE_HOTKEY,
   "Bei der Zuweisung muss die Taste 'Hotkey einschalten' gedrückt (und gehalten) werden, bevor andere Hotkeys erkannt werden. Ermöglicht die Zuordnung von Controller-Schaltflächen zu Hotkey-Funktionen ohne die normale Eingabe zu beeinflussen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_VOLUME_UP,
   "Lautstärke erhöhen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_VOLUME_UP,
   "Erhöht Audio-Lautstärkepegel."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_VOLUME_DOWN,
   "Lautstärke reduzieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_VOLUME_DOWN,
   "Verringert die Lautstärke der Ausgabe."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_OVERLAY_NEXT,
   "Nächster Overlay"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_OVERLAY_NEXT,
   "Wechselt zum nächsten verfügbaren Layout des aktuell aktiven Overlay."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_DISK_EJECT_TOGGLE,
   "Datenträger einlegen/auswerfen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_DISK_EJECT_TOGGLE,
   "Wenn das virtuelle Disc-Fach geschlossen ist, wird es geöffnet und die geladene Disc entfernt. Andernfalls wird die aktuell ausgewählte Disc eingelegt und das Fach geschlossen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_DISK_NEXT,
   "Nächste Disc"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_DISK_NEXT,
   "Erhöht den aktuell ausgewählten Disc-Index. Hinweis: Virtuelles Disc-Fach muss geöffnet sein."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_DISK_PREV,
   "Vorherige Disc"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_DISK_PREV,
   "Verringert den aktuell ausgewählten Disc-Index. Hinweis: Virtuelles Disc-Fach muss geöffnet sein."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_GRAB_MOUSE_TOGGLE,
   "Mauszeiger nehmen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_GRAB_MOUSE_TOGGLE,
   "Greift oder löst die Maus, wenn der Mauszeiger ausgeblendet wird, wird der System-Cursor versteckt und beschränkt auf das RetroArch-Anzeigefenster, wodurch die relative Maustaste verbessert wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_GAME_FOCUS_TOGGLE,
   "Spielfokus (umschalten)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_GAME_FOCUS_TOGGLE,
   "Aktiviert oder deaktiviert den \"Spielfokus\"-Modus. Wenn der Inhalt fokussiert ist, sind Hotkeys deaktiviert (volle Tastatureingabe wird an den laufenden Kern übergeben) und die Maus wird angegriffen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_UI_COMPANION_TOGGLE,
   "Desktop-Menü (umschalten)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_UI_COMPANION_TOGGLE,
   "Öffnet den Begleiter WIMP (Windows, Icons, Menüs, Pointer) Desktop-Benutzeroberfläche."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_MENU_TOGGLE,
   "Menü aufrufen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_MENU_TOGGLE,
   "Wechselt die aktuelle Anzeige zwischen dem Menü und dem laufenden Content."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_RECORDING_TOGGLE,
   "Aufnahme (starten/stoppen)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_RECORDING_TOGGLE,
   "Start/stoppt die Aufzeichnung der aktuellen Sitzung in einer lokalen Videodatei."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_STREAMING_TOGGLE,
   "Streaming (starten/stoppen)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_STREAMING_TOGGLE,
   "Startet/stoppt die Aufzeichnung der aktuellen Sitzung in einer lokalen Videodatei."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_RUNAHEAD_TOGGLE,
   "Run-Ahead (Umschalten)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_RUNAHEAD_TOGGLE,
   "Schaltet Run-Ahead ein/aus."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_AI_SERVICE,
   "KI-Dienst"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_AI_SERVICE,
   "Erfasst ein Bild des aktuellen Inhalts und übersetzt und/oder liest einen Text auf dem Bildschirm voraus. Hinweis: 'KI Service' muss aktiviert und konfiguriert sein."
   )

/* Settings > Input > Port # Binds */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DEVICE_TYPE,
   "Gerätetyp"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ADC_TYPE,
   "Analog-zu-Digital-Typ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DEVICE_INDEX,
   "Geräteindex"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_BIND_ALL,
   "Alle Steuerelemente festlegen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_BIND_DEFAULT_ALL,
   "Standardeinstellungen der Steuerung zurücksetzen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_SAVE_AUTOCONFIG,
   "Controller-Profil speichern"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_INDEX,
   "Maus-Index"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_B,
   "B-Knopf (nach unten)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_Y,
   "Y-Knopf (links)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_SELECT,
   "Select-Knopf"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_START,
   "Start-Knopf"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_UP,
   "Steuerkreuz hoch"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_DOWN,
   "Steuerkreuz runter"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_LEFT,
   "Steuerkreuz links"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_RIGHT,
   "Steuerkreuz rechts"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_A,
   "A-Knopf (rechts)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_X,
   "X-Knopf (oben)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_L,
   "L-Knopf (Schultertaste)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_R,
   "R-Knopf (Schultertaste)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_L2,
   "L2-Knopf (Abzug)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_R2,
   "R2-Knopf (Abzug)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_L3,
   "L3-Knopf (Daumen)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_R3,
   "R3-Knopf (Daumen)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_X_PLUS,
   "Linker Analogstick X+ (rechts)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_X_MINUS,
   "Linker Analogstick X- (links)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_Y_PLUS,
   "Linker Analogstick Y+ (nach unten)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_Y_MINUS,
   "Linker Analogstick Y- (nach oben)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_X_PLUS,
   "Rechter Analogstick X+ (rechts)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_X_MINUS,
   "Rechter Analogstick X- (links)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_Y_PLUS,
   "Rechter Analogstick Y+ (nach unten)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_Y_MINUS,
   "Rechter Analogstick Y- (nach oben)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_TRIGGER,
   "Gun auslösen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_RELOAD,
   "Gun nachladen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_UP,
   "Gun D-Pad hoch"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_DOWN,
   "Gun D-Pad runter"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_LEFT,
   "Gun D-Pad links"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_RIGHT,
   "Gun D-Pad rechts"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TURBO_ENABLE,
   "Autofeuer aktivieren"
   )

/* Settings > Latency */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN_AHEAD_ENABLED,
   "Run-Ahead zur Reduzierung der Latenz"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUN_AHEAD_ENABLED,
   "Führt die Kernlogik einen oder mehrere Frames voraus aus und lädt den vorherigen Zustand zurück, um die wahrgenommene Eingangsverzögerung zu verringern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN_AHEAD_FRAMES,
   "Anzahl der Run-Ahead-Frames"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUN_AHEAD_FRAMES,
   "Die Anzahl der Frames, die im voraus ausgeführt werden sollen. Verursacht Gameplay-Probleme wie Bildinstabilität wenn die Anzahl der spielinternen Verzögerungsframes überschritten wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN_AHEAD_SECONDARY_INSTANCE,
   "Zweite Instanz für Run-Ahead verwenden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUN_AHEAD_SECONDARY_INSTANCE,
   "Verwendet für das Run-Ahead eine zweite Instanz des RetroArch-Cores, welche das Laden des vorherigen Zustands ersetzt. Vermeidet Audioprobleme."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN_AHEAD_HIDE_WARNINGS,
   "Run-Ahead Warnungen ausblenden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUN_AHEAD_HIDE_WARNINGS,
   "Blendet die Warnmeldung aus, die bei Verwendung von Run-Ahead angezeigt wird wenn der Core keine Speicherabbilder unterstützt."
   )

/* Settings > Core */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHARED_CONTEXT,
   "Gemeinsamen Hardware-Kontext aktivieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHARED_CONTEXT,
   "Gibt Hardware-gerenderten Cores einen eigenen privaten Kontext. Vermeidet, dass der Hardware-Status zwischen den Frames geschätzt werden muss."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DRIVER_SWITCH_ENABLE,
   "Cores das Wechseln des Videotreibers erlauben"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DRIVER_SWITCH_ENABLE,
   "Erlaubt es Cores zu einem anderen als den derzeit geladenen Videotreiber zu wechseln."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DUMMY_ON_CORE_SHUTDOWN,
   "Leeren Core laden, wenn Core beendet wird"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DUMMY_ON_CORE_SHUTDOWN,
   "Einige Cores verfügen über eine Funktion zum Herunterfahren. Durch das Laden eines Leer-Cores wird das Beenden von RetroArch verhindert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_SET_SUPPORTS_NO_CONTENT_ENABLE,
   "Cores automatisch starten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHECK_FOR_MISSING_FIRMWARE,
   "Vor dem Laden nach fehlender Firmware suchen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHECK_FOR_MISSING_FIRMWARE,
   "Überprüft, ob eventuell benötigte Firmware vorhanden ist, bevor versucht wird, Inhalte zu laden."
   )
#ifndef HAVE_DYNAMIC
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ALWAYS_RELOAD_CORE_ON_RUN_CONTENT,
   "Core beim Starten von Inhalten immer neu laden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ALWAYS_RELOAD_CORE_ON_RUN_CONTENT,
   "Startet RetroArch neu, wenn Inhalte gestartet werden, auch wenn der angeforderte Core bereits geladen ist. Dies kann die Systemstabilität auf Kosten längerer Ladezeiten verbessern."
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ALLOW_ROTATE,
   "Erlaube Bildrotation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_ALLOW_ROTATE,
   "Erlaubt Cores die Bildrotation einzustellen. Wenn deaktiviert, werden Rotationsanfragen ignoriert. Nützlich für Setups, bei denen der Bildschirm selbst gedreht wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_MANAGER_LIST,
   "Cores verwalten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_MANAGER_LIST,
   "Informationen zu installierten Cores anzeigen und Offline-Wartungsaufgaben ausführen (Sichern, Wiederherstellen, Löschen usw.)."
   )

/* Settings > Configuration */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONFIG_SAVE_ON_EXIT,
   "Konfiguration beim Beenden speichern"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONFIG_SAVE_ON_EXIT,
   "Speichert Änderungen an der Konfigurationsdatei beim Beenden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GAME_SPECIFIC_OPTIONS,
   "Lädt inhaltsspezifische Core-Einstellungen automatisch"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GAME_SPECIFIC_OPTIONS,
   "Aktiviere benutzerdefinierte Core-Einstellungen beim Start automatisch."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUTO_OVERRIDES_ENABLE,
   "Override-Dateien automatisch laden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUTO_OVERRIDES_ENABLE,
   "Aktiviere benutzerdefininerte Einstellungen beim Start automatisch."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUTO_REMAPS_ENABLE,
   "Remap-Dateien automatisch laden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUTO_REMAPS_ENABLE,
   "Aktiviere benutzerdefinierte Tastenbelegungen beim Start automatisch."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUTO_SHADERS_ENABLE,
   "Shader-Voreinstellungen automatisch laden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GLOBAL_CORE_OPTIONS,
   "Globale Core-Einstellungen verwenden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GLOBAL_CORE_OPTIONS,
   "Alle Core-Einstellungen in einer gemeinsamen Datei (retroarch-core-options.cfg) speichern. Wenn diese Option deaktiviert ist, werden die Einstellungen für jeden Core in einem separaten core-spezifischen Ordner/Datei im RetroArch-Verzeichnis 'Config' gespeichert."
   )

/* Settings > Saving */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SORT_SAVEFILES_ENABLE,
   "Speicherdaten nach Core-Namen in Ordner sortieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SORT_SAVEFILES_ENABLE,
   "Speicherdaten in Ordnern sichern, die nach dem verwendeten Core benannt sind."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SORT_SAVESTATES_ENABLE,
   "Speicherabbilder nach Core-Namen in Ordner sortieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SORT_SAVESTATES_ENABLE,
   "Speichere Spielstände in Ordnern ab, die nach dem verwendeten Core benannt sind."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SORT_SAVEFILES_BY_CONTENT_ENABLE,
   "Speicherdaten nach Inhaltsverzeichnis in Ordner sortieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SORT_SAVEFILES_BY_CONTENT_ENABLE,
   "Speicherdaten in Ordnern sichern, die nach dem Verzeichnis benannt sind, in dem sich der ausgeführte Inhalt befindet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SORT_SAVESTATES_BY_CONTENT_ENABLE,
   "Speicherabbilder nach Inhalts-Verzeichnis in Ordner sortieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SORT_SAVESTATES_BY_CONTENT_ENABLE,
   "Speicherabbilder in Ordnern sichern, die nach dem Verzeichnis benannt sind, in dem sich der ausgeführte Inhalt befindet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BLOCK_SRAM_OVERWRITE,
   "Überschreibe SaveRAM nicht, wenn ein Zustand (Savestate) geladen wird"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BLOCK_SRAM_OVERWRITE,
   "Verhindere, dass das Save-RAM überschrieben wird, wenn ein Spielstand geladen wird. Kann zu fehlerhaften Spielen führen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUTOSAVE_INTERVAL,
   "Intervall für automatisches Speichern des SaveRAM"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUTOSAVE_INTERVAL,
   "Das nichtflüchtige SaveRAM automatisch in regelmäßigen Abständen speichern (in Sekunden)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_AUTO_INDEX,
   "Abbild-Speicherplatz-Index automatisch inkrementieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_AUTO_INDEX,
   "Vor dem Erstellen eines Speicherabbilds wird der Index des Speicherplatzes automatisch erhöht. Beim Laden von Inhalten wird der höchste vorhandene Index gewählt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_MAX_KEEP,
   "Maximale Anzahl automatisch erzeugter Speicherabbilder"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_MAX_KEEP,
   "Begrenzt die Anzahl der Speicherabbilder, die erzeugt werden, wenn 'Abbild-Speicherplatz-Index automatisch inkrementieren' aktiviert ist. Wenn beim Speichern eines neuen Abbilds das Limit überschritten wird, wird das Abbild mit dem niedrigsten Index gelöscht. Ein Wert von '0' bedeutet, dass unbegrenzt viele Abbilder erzeugt werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_AUTO_SAVE,
   "Zustand automatisch speichern"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_AUTO_SAVE,
   "Erstellt automatisch ein Speicherabbild, wenn der Inhalt geschlossen wird. RetroArch lädt dieses Speicherabbild automatisch, wenn 'Speicherabbild automatisch laden' aktiviert ist."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_AUTO_LOAD,
   "Speicherabbild automatisch laden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_AUTO_LOAD,
   "Lade den zuletzt gespeicherten Zustand beim Start automatisch."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_THUMBNAIL_ENABLE,
   "Zustands-Miniaturansichten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_THUMBNAIL_ENABLE,
   "Vorschaubilder von Speicherabbildern im Menü anzeigen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_FILE_COMPRESSION,
   "SaveRAM Kompression"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_FILE_COMPRESSION,
   "Nicht-volatile SaveRAM Dateien in einem archivierten Format speichern. Reduziert die Dateigröße stark auf Kosten von (leicht) erhöhten Speicher-/Ladezeiten. Hinweis: Nur für Cores, die das Speichern über libretros Standard-SaveRAM-Schnittstelle ermöglichen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_FILE_COMPRESSION,
   "Speicherzustand Kompression"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_FILE_COMPRESSION,
   "Speicherzustand-Dateien in einem archivierten Format speichern. Reduziert die Dateigröße drastisch auf Kosten erhöhter Speicher- und Ladezeiten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SORT_SCREENSHOTS_BY_CONTENT_ENABLE,
   "Bildschirmfotos nach Inhaltsverzeichnis in Ordner sortieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SORT_SCREENSHOTS_BY_CONTENT_ENABLE,
   "Bildschirmfotos werden in Ordnern gespeichert, die nach dem Verzeichnis benannt sind, in dem sich der ausgeführte Inhalt befindet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVEFILES_IN_CONTENT_DIR_ENABLE,
   "Speicherdaten im Verzeichnis des Inhalts speichern"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATES_IN_CONTENT_DIR_ENABLE,
   "Zustandsdaten im Verzeichnis des Inhalts speichern"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEMFILES_IN_CONTENT_DIR_ENABLE,
   "Systemdateien befinden sich im Verzeichnis des Inhalts"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCREENSHOTS_IN_CONTENT_DIR_ENABLE,
   "Bildschirmfotos im Verzeichnis des Inhalts speichern"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_RUNTIME_LOG,
   "Laufzeitprotokoll speichern (je Core)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_RUNTIME_LOG,
   "Verfolgt, wie lange jedes Inhaltselement ausgeführt wurde, wobei die Datensätze nach Core getrennt werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_RUNTIME_LOG_AGGREGATE,
   "Laufzeitprotokoll speichern (Gesamtsumme)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_RUNTIME_LOG_AGGREGATE,
   "Verfolgt, wie lange jedes Inhaltselement ausgeführt wurde, und zeichnet die Gesamtsumme über alle Cores hinweg auf."
   )

/* Settings > Logging */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOG_VERBOSITY,
   "Protokollausführlichkeit"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOG_VERBOSITY,
   "Protokoll ins Terminal oder in eine Datei schreiben."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRONTEND_LOG_LEVEL,
   "Bestimmt den Logging-Level fürs Frontend. Wenn der Level, der vom Frontend gemeldet wird, unter diesem Wert liegt, wird er ignoriert."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LIBRETRO_LOG_LEVEL,
   "Bestimmt den Logging-Level für Cores. Wenn der Level, der von einem Core gemeldet wird, unter diesem Wert liegt, wird er ignoriert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOG_TO_FILE,
   "In Datei protokollieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOG_TO_FILE,
   "Leitet die Logmeldungen des Systems in die Datei um. Erfordert die Aktivierung der 'Protokollierung Verbots' des Systems."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOG_TO_FILE_TIMESTAMP,
   "Protokolldateien zeitstempeln"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOG_TO_FILE_TIMESTAMP,
   "Beim Logging in eine Datei wird die Ausgabe von jeder RetroArch Session in eine neue zeitgestempelte Datei umgeleitet. Wenn deaktiviert, wird das Protokoll bei jedem Neustart von RetroArch überschrieben."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PERFCNT_ENABLE,
   "Leistungsindikatoren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PERFCNT_ENABLE,
   "Leistungszähler für RetroArch und Cores. Daten können zur Ermittlung von Systemengpässen und Feinabstimmung beitragen."
   )

/* Settings > File Browser */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHOW_HIDDEN_FILES,
   "Zeige versteckte Dateien und Ordner"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SHOW_HIDDEN_FILES,
   "Zeige versteckte Dateien und Ordner im Dateimanager an."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NAVIGATION_BROWSER_FILTER_SUPPORTED_EXTENSIONS_ENABLE,
   "Unbekannte Dateierweiterungen filtern"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NAVIGATION_BROWSER_FILTER_SUPPORTED_EXTENSIONS_ENABLE,
   "Zeige nur Dateien mit unterstützten Dateierweiterungen im Dateibrowser an."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USE_BUILTIN_PLAYER,
   "Verwende eingebauten Medienplayer"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FILTER_BY_CURRENT_CORE,
   "Nach aktuellem Core filtern"
   )

/* Settings > Frame Throttle */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REWIND_SETTINGS,
   "Zurückspulen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_REWIND,
   "Verwalte die Einstellungen für die Rückspul-Funktion."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAME_TIME_COUNTER_SETTINGS,
   "Frame-Zeitzähler"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRAME_TIME_COUNTER_SETTINGS,
   "Einstellungen, die den Zeitzähler des Frames beeinflussen (nur aktiv, wenn Threadd-Video deaktiviert ist)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FASTFORWARD_RATIO,
   "Zeitraffer Rate"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FASTFORWARD_RATIO,
   "Die maximale Geschwindigkeit, mit der Inhalt im Vorlauf-Modus dargestellt wird (z.B. 5x für 60 Inhalt mit 60 Bildern/sek => Begrenzung auf 300 Bilder/sek). Wenn 0x gewählt ist, ist die Vorlauf-Geschwindigkeit unbegrenzt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SLOWMOTION_RATIO,
   "Zeitlupen Rate"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SLOWMOTION_RATIO,
   "Der Rate, in der langsamere Bewegung abgespielt wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_ENUM_THROTTLE_FRAMERATE,
   "Bildwiederholrate im Menü begrenzen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_ENUM_THROTTLE_FRAMERATE,
   "Stelle sicher, dass die Bildwiederholrate im Menü begrenzt wird."
   )

/* Settings > Frame Throttle > Rewind */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REWIND_ENABLE,
   "Zurückspulen (Rewind) aktivieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REWIND_ENABLE,
   "Kehre zu einem vorherigen Punkt des letzten Spiels zurück. Dies verursacht einen schweren Performance-Einbruch beim Spielen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REWIND_GRANULARITY,
   "Frames zurückspulen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REWIND_GRANULARITY,
   "Die Anzahl der Frames, die pro Schritt zurückgezogen werden sollen, höhere Werte erhöhen die Geschwindigkeit des Zurückspulens."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REWIND_BUFFER_SIZE,
   "Wiederherstellen der Buffer Größe (MB)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REWIND_BUFFER_SIZE,
   "Die Speichermenge (in MB), die für den Rückspulpuffer zur Verfügung stehen soll. Das Erhöhen von diesem Wert ermöglicht längeres Zurückspulen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REWIND_BUFFER_SIZE_STEP,
   "Wiederherstellen der Buffer Größe (MB)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REWIND_BUFFER_SIZE_STEP,
   "Jedes Mal, wenn Du den Wert für die Rückspulpuffergröße erhöhst oder verringerst, ändert sich der Wert um diesen Betrag."
   )

/* Settings > Frame Throttle > Frame Time Counter */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAME_TIME_COUNTER_RESET_AFTER_FASTFORWARDING,
   "Zurücksetzen nach Fast-Forward"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRAME_TIME_COUNTER_RESET_AFTER_FASTFORWARDING,
   "Den Frame Zeitzähler nach dem schnellen Weiterleiten zurücksetzen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAME_TIME_COUNTER_RESET_AFTER_LOAD_STATE,
   "Nach Lade State zurücksetzen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRAME_TIME_COUNTER_RESET_AFTER_LOAD_STATE,
   "Den Frame Zeitzähler nach dem schnellen Weiterleiten zurücksetzen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAME_TIME_COUNTER_RESET_AFTER_SAVE_STATE,
   "Nach dem Speichern des Zustands zurücksetzen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRAME_TIME_COUNTER_RESET_AFTER_SAVE_STATE,
   "Den Frame Zeitzähler nach dem State speichern, zurücksetzen."
   )

/* Settings > Recording */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_QUALITY,
   "Aufnahmequalität"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_CONFIG,
   "Bearbeite Aufnahme-Konfiguration"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_THREADS,
   "Threads aufzeichnen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_POST_FILTER_RECORD,
   "Wende Filter auf Aufnahme an"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_POST_FILTER_RECORD,
   "Zeichnet das Bild auf, nachdem Filter (aber keine Shader) angewendet wurden. Dein Video wird genauso gut aussehen, wie das, was Du auf dem Bildschirm siehst."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_GPU_RECORD,
   "Verwende GPU für Aufnahme"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_GPU_RECORD,
   "Verwende Bildmaterial nach Shaderdurchläufen für Aufnahmen, sofern verfügbar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STREAMING_MODE,
   "Streamingmodus"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_STREAM_QUALITY,
   "Streamqualität"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STREAM_CONFIG,
   "Bearbeite Streaming-Konfiguration"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STREAMING_TITLE,
   "Streamtitel"
   )

/* Settings > On-Screen Display */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONSCREEN_OVERLAY_SETTINGS,
   "Bildschirm-Overlay"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ONSCREEN_OVERLAY_SETTINGS,
   "Die Rahmen und Steuerelemente auf der Anzeige anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONSCREEN_VIDEO_LAYOUT_SETTINGS,
   "Video-Layout"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ONSCREEN_VIDEO_LAYOUT_SETTINGS,
   "Das Video-Layout anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONSCREEN_NOTIFICATIONS_SETTINGS,
   "Bildschirm-Benachrichtigungen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ONSCREEN_NOTIFICATIONS_SETTINGS,
   "Bildschirm-Benachrichtigungen anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONSCREEN_NOTIFICATIONS_VIEWS_SETTINGS,
   "Benachrichtigungssichtbarkeit"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ONSCREEN_NOTIFICATIONS_VIEWS_SETTINGS,
   "Die Sichtbarkeit bestimmter Benachrichtigungstypen umschalten."
   )

/* Settings > On-Screen Display > On-Screen Overlay */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_ENABLE,
   "Aktiviere Overlay"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_ENABLE,
   "Overlays für Rahmen und Steuerelemente auf dem Bildschirm verwenden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_HIDE_IN_MENU,
   "Overlay im Menü nicht anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_HIDE_IN_MENU,
   "Verberge das Overlay im Menü und zeige es wieder an, wenn das Menü verlassen wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_HIDE_WHEN_GAMEPAD_CONNECTED,
   "Overlay ausblenden wenn ein Gamepad verbunden ist"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_HIDE_WHEN_GAMEPAD_CONNECTED,
   "Overlay ausblenden, wenn ein physisches Gamepad an Port 1 angeschlossen ist, und erneut anzeigen, wenn das Gamepad getrennt wird."
   )
#if defined(ANDROID)
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_HIDE_WHEN_GAMEPAD_CONNECTED_ANDROID,
   "Overlay ausblenden, wenn ein physisches Gamepad an Port 1 angeschlossen ist. WARNUNG: Overlay wird nicht automatisch wiederhergestellt, wenn das Gamepad getrennt wird."
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_SHOW_PHYSICAL_INPUTS,
   "Eingaben im Overlay anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_SHOW_PHYSICAL_INPUTS,
   "Tastatur/Controller-Tastendrücke im Overlay anzeigen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_SHOW_PHYSICAL_INPUTS_PORT,
   "Eingaben von folgendem Port anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_SHOW_PHYSICAL_INPUTS_PORT,
   "Wähle den Port des Controllers aus, dessen Eingaben im Overlay angezeigt werden sollen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_SHOW_MOUSE_CURSOR,
   "Mauszeiger mit dem Overlay anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_SHOW_MOUSE_CURSOR,
   "Den Mauszeiger anzeigen wenn ein Overlay verwendet wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_AUTO_ROTATE,
   "Overlay automatisch rotieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_AUTO_ROTATE,
   "Wenn dies durch das aktuelle Overlay unterstützt wird, wird das Layout automatisch gedreht, um es an die Bildschirmausrichtung/das Seitenverhältnis anzupassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_AUTO_SCALE,
   "Overlay automatisch skalieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_AUTO_SCALE,
   "Overlay-Maßstab und den Abstand der UI-Elemente automatisch an das Seitenverhältnis des Bildschirms anpassen. Erzielt die besten Ergebnisse mit Controller-Overlays."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY,
   "Overlays"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_AUTOLOAD_PREFERRED,
   "Bevorzugtes Overlay automatisch laden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_OPACITY,
   "Overlay-Transparenz"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_OPACITY,
   "Transparenz aller Bedienelemente des Overlays."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_PRESET,
   "Overlay-Voreinstellung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_PRESET,
   "Wähle ein Overlay mit dem Dateibrowser aus."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_SCALE_LANDSCAPE,
   "(Querformat) Overlay-Skalierungsfaktor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_SCALE_LANDSCAPE,
   "Skalierungsfaktor aller UI-Elemente des Overlays bei Verwendung der Querformatausrichtung."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_ASPECT_ADJUST_LANDSCAPE,
   "(Querformat) Overlay-Seitenverhältnisanpassung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_ASPECT_ADJUST_LANDSCAPE,
   "Einen Korrekturfaktor für das Seitenverhältnis auf das Overlay anwenden, wenn die Querformatanzeige verwendet wird. Positive Werte erhöhen (und negative Werte verringern) die effektive Overlay-Breite."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_X_SEPARATION_LANDSCAPE,
   "(Querformat) Overlay horizontale Trennung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_X_SEPARATION_LANDSCAPE,
   "Wenn dies durch die aktuelle Voreinstellung unterstützt wird, wird der Abstand zwischen UI-Elementen in der linken und rechten Hälfte eines Overlays angepasst, wenn die Querformatanzeige verwendet wird. Positive Werte erhöhen (und negative Werte verringern) die Trennung der beiden Hälften."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_Y_SEPARATION_LANDSCAPE,
   "(Querformat) Overlay vertikale Trennung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_Y_SEPARATION_LANDSCAPE,
   "Wenn dies durch die aktuelle Voreinstellung unterstützt wird, wird der Abstand zwischen UI-Elementen in der oberen und unteren Hälfte eines Overlays angepasst, wenn die Querformatanzeige verwendet wird. Positive Werte erhöhen (und negative Werte verringern) die Trennung der beiden Hälften."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_X_OFFSET_LANDSCAPE,
   "(Querformat) Overlay X Offset"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_X_OFFSET_LANDSCAPE,
   "Horizontaler Overlay-Offset bei Verwendung der Querformatanzeige. Positive Werte verschieben die Überlagerung nach rechts, negative Werte nach links."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_Y_OFFSET_LANDSCAPE,
   "(Querformat) Overlay Y Offset"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_Y_OFFSET_LANDSCAPE,
   "Vertikaler Overlay-Offset bei Verwendung der Querformatanzeige. Positive Werte verschieben die Überlagerung nach oben, negative Werte nach unten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_SCALE_PORTRAIT,
   "(Hochformat) Overlay-Skalierungsfaktor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_SCALE_PORTRAIT,
   "Skalierungsfaktor aller UI-Elemente des Overlays bei Verwendung der Hochformatanzeige."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_ASPECT_ADJUST_PORTRAIT,
   "(Hochformat) Overlay-Seitenverhältnisanpassung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_ASPECT_ADJUST_PORTRAIT,
   "Einen Korrekturfaktor für das Seitenverhältnis auf das Overlay anwenden, wenn die Hochformatanzeige verwendet wird. Positive Werte erhöhen (und negative Werte verringern) die effektive Overlay-Höhe."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_X_SEPARATION_PORTRAIT,
   "(Hochformat) Overlay horizontale Trennung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_X_SEPARATION_PORTRAIT,
   "Wenn dies durch die aktuelle Voreinstellung unterstützt wird, wird der Abstand zwischen UI-Elementen in der linken und rechten Hälfte eines Overlays angepasst, wenn die Hochformatanzeige verwendet wird. Positive Werte erhöhen (und negative Werte verringern) die Trennung der beiden Hälften."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_Y_SEPARATION_PORTRAIT,
   "(Hochformat) Overlay vertikale Trennung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_Y_SEPARATION_PORTRAIT,
   "Wenn dies durch die aktuelle Voreinstellung unterstützt wird, wird der Abstand zwischen UI-Elementen in der oberen und unteren Hälfte eines Overlays angepasst, wenn die Hochformatanzeige verwendet wird. Positive Werte erhöhen (und negative Werte verringern) die Trennung der beiden Hälften."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_X_OFFSET_PORTRAIT,
   "(Hochformat) Overlay X Offset"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_X_OFFSET_PORTRAIT,
   "Horizontaler Overlay-Offset bei Verwendung der Hochformatanzeige. Positive Werte verschieben die Überlagerung nach rechts, negative Werte nach links."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_Y_OFFSET_PORTRAIT,
   "(Hochformat) Overlay Y Offset"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_Y_OFFSET_PORTRAIT,
   "Vertikaler Overlay-Offset bei Verwendung der Hochformatanzeige. Positive Werte verschieben die Überlagerung nach oben, negative Werte nach unten."
   )

/* Settings > On-Screen Display > Video Layout */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_LAYOUT_ENABLE,
   "Video-Layout aktivieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_LAYOUT_ENABLE,
   "Video-Layouts werden für Rahmen und andere Grafiken verwendet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_LAYOUT_PATH,
   "Video-Layout-Pfad"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_LAYOUT_PATH,
   "Im Dateibrowser ein Video-Layout auswählen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_LAYOUT_SELECTED_VIEW,
   "Ausgewählte Ansicht"
   )
MSG_HASH( /* FIXME Unused */
   MENU_ENUM_SUBLABEL_VIDEO_LAYOUT_SELECTED_VIEW,
   "Eine Ansicht innerhalb des geladenen Layouts auswählen."
   )

/* Settings > On-Screen Display > On-Screen Notifications */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FONT_ENABLE,
   "Bildschirm-Benachrichtigungen aktivieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FONT_ENABLE,
   "Zeige Bildschirmbenachrichtungen an."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WIDGETS_ENABLE,
   "Grafik-Widgets"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WIDGETS_ENABLE,
   "Verwende dekorierte Animationen, Benachrichtigungen, Anzeigen und Steuerelemente."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WIDGET_SCALE_AUTO,
   "Grafik-Widgets automatisch skalieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WIDGET_SCALE_AUTO,
   "Größe dekorierter Benachrichtigungen, Anzeigen und Steuerelemente basierend auf der aktuellen Menüskala automatisch ändern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WIDGET_SCALE_FACTOR_FULLSCREEN,
   "Skalierung von Grafik-Widgets überschreiben (Vollbild)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WIDGET_SCALE_FACTOR_FULLSCREEN,
   "Wendet eine manuelle Überschreibung des Skalierungsfaktors an, wenn Anzeige-Widgets im Fenstermodus gezeigt werden. Gilt nur, wenn 'Grafik-Widgets automatisch skalieren' deaktiviert ist. Kann verwendet werden, um die Größe dekorierter Benachrichtigungen, Anzeigen und Steuerelemente unabhängig vom Menü selbst zu erhöhen oder zu verringern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WIDGET_SCALE_FACTOR_WINDOWED,
   "Skalierung von Grafik-Widgets überschreiben (Fenster)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WIDGET_SCALE_FACTOR_WINDOWED,
   "Wendet eine manuelle Überschreibung des Skalierungsfaktors an, wenn Anzeige-Widgets im Fenstermodus gezeigt werden. Gilt nur, wenn 'Grafik-Widgets automatisch skalieren' deaktiviert ist. Kann verwendet werden, um die Größe dekorierter Benachrichtigungen, Anzeigen und Steuerelemente unabhängig vom Menü selbst zu erhöhen oder zu verringern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FPS_SHOW,
   "Bildwiederholrate anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FPS_SHOW,
   "Zeigt die aktuellen Bilder pro Sekunde an."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FPS_UPDATE_INTERVAL,
   "Aktualisierungsintervall für die Bildwiederholrate (In Frames)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FPS_UPDATE_INTERVAL,
   "Die Bildwiederholratenanzeige wird im eingestellten Intervall aktualisiert (in frames)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAMECOUNT_SHOW,
   "Zeige die aktuelle Anzahl an Einzelbildern an"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRAMECOUNT_SHOW,
   "Zeigt die aktuelle Bildanzahl auf dem Bildschirm an."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STATISTICS_SHOW,
   "Statistiken anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_STATISTICS_SHOW,
   "Technische Onscreen-Statistiken anzeigen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MEMORY_SHOW,
   "Speichernutzung anzeigen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MEMORY_UPDATE_INTERVAL,
   "Aktualisierungsintervall für die Speichernutzung (In Frames)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MEMORY_UPDATE_INTERVAL,
   "Die Anzeige der Speichernutzung wird im eingestellten Intervall aktualisiert (in frames)."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MEMORY_SHOW,
   "Zeigt die verwendete und die gesamte Arbeitsspeichermenge des Systems an."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_LOAD_CONTENT_ANIMATION,
   "\"Inhalt laden\" Startbenachrichtigung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_LOAD_CONTENT_ANIMATION,
   "Beim Laden von Inhalten eine kurze Startfeedback-Animation zeigen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_AUTOCONFIG,
   "Eingabe (Autoconfig) Verbindungsbenachrichtigungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_CHEATS_APPLIED,
   "Cheat-Code-Benachrichtigungen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_CHEATS_APPLIED,
   "Eine Meldung auf dem Bildschirm anzeigen, wenn Cheat-Codes angewendet werden."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_AUTOCONFIG,
   "Eine Bildschirmmeldung anzeigen, wenn Eingabegeräte angeschlossen/getrennt werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_REMAP_LOAD,
   "Benachrichtigungen beim Laden von Eingabe-Remaps"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_REMAP_LOAD,
   "Beim Laden von Eingabe-Remap-Dateien eine Bildschirmmeldung anzeigen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_CONFIG_OVERRIDE_LOAD,
   "Benachrichtigungen beim Laden von Konfigurationsüberschreibungen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_CONFIG_OVERRIDE_LOAD,
   "Beim Laden von Konfigurationsüberschreibungsdateien eine Meldung auf dem Bildschirm anzeigen."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_SET_INITIAL_DISK,
   "Eine Bildschirmmeldung anzeigen, wenn beim Start automatisch die zuletzt verwendete Disc mit Multi-Disc-Inhalten wiederhergestellt wird, die über M3U-Wiedergabelisten geladen wurde."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_FAST_FORWARD,
   "Vorspulbenachrichtigungen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_FAST_FORWARD,
   "Eine Bildschirmanzeige anzeigen, wenn Inhalte vorgespult werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SCREENSHOT,
   "Screenshot-Benachrichtigungen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_SCREENSHOT,
   "Eine Bildschirmmeldung anzeigen, wenn ein Bildschirmfoto aufgenommen wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SCREENSHOT_DURATION,
   "Screenshot-Benachrichtigungspersistenz"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_SCREENSHOT_DURATION,
   "Definiert die Dauer der Screenshot-Meldung auf dem Bildschirm."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SCREENSHOT_DURATION_FAST,
   "Schnell"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SCREENSHOT_DURATION_VERY_FAST,
   "Sehr schnell"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SCREENSHOT_DURATION_INSTANT,
   "Sofort"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SCREENSHOT_FLASH,
   "Screenshot Blitzeffekt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_SCREENSHOT_FLASH,
   "Beim Aufnehmen eines Bildschirmfotos einen weißen Blinkeffekt mit der gewünschten Dauer auf dem Bildschirm anzeigen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SCREENSHOT_FLASH_NORMAL,
   "EIN (Normal)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SCREENSHOT_FLASH_FAST,
   "EIN (Schnell)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FONT_PATH,
   "Schriftart für Bildschirm-Benachrichtigungen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FONT_PATH,
   "Die Schriftart für Benachrichtigungen auf dem Bildschirm auswählen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FONT_SIZE,
   "Schritftgröße der Bildschirm-Benachrichtigungen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FONT_SIZE,
   "Wähle die Schriftgröße in Punkten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_POS_X,
   "X-Position der Bildschirm-Benachrichtigungen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MESSAGE_POS_X,
   "Wähle eine eigene X-Achsenposition für Bildschirmmeldungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_POS_Y,
   "Y-Position der Bildschirm-Benachrichtigungen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MESSAGE_POS_Y,
   "Wähle eine eigene Y-Achsenposition für Bildschirmmeldungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_COLOR_RED,
   "Rot-Anteil der Bildschirmmeldungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_COLOR_GREEN,
   "Grün-Anteil der Bildschirmmeldungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_COLOR_BLUE,
   "Blau-Anteil der Bildschirmmeldungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_BGCOLOR_ENABLE,
   "Aktiviere Hintergrund in Bildschirmmeldungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_BGCOLOR_RED,
   "Rot-Anteil der Hintergrundfarbe der Bildschirmmeldungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_BGCOLOR_GREEN,
   "Grün-Anteil der Hintergrundfarbe der Bildschirmmeldungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_BGCOLOR_BLUE,
   "Blau-Anteil der Hintergrundfarbe der Bildschirmmeldungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_BGCOLOR_OPACITY,
   "Transparenz des Hintergrunds der Bildschirmmeldungen"
   )

/* Settings > User Interface */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_VIEWS_SETTINGS,
   "Sichtbarkeit von Menüelementen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_VIEWS_SETTINGS,
   "Die Sichtbarkeit von Menüelementen in RetroArch umschalten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SETTINGS,
   "Menü"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SETTINGS,
   "Legt die Einstellungen für das Aussehen des Menübildschirms fest."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHOW_ADVANCED_SETTINGS,
   "Zeige erweiterte Einstellungen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SHOW_ADVANCED_SETTINGS,
   "Erweiterte Einstellungen für Power-Nutzer anzeigen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_ENABLE_KIOSK_MODE,
   "Aktiviere Kiosk-Modus"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_ENABLE_KIOSK_MODE,
   "Schützt RetroArch, in dem alle Konfigurationsmöglichkeiten ausgeblendet werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_KIOSK_MODE_PASSWORD,
   "Setze Passwort zur Deaktivierung des Kiosk-Modus"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_KIOSK_MODE_PASSWORD,
   "Wird beim Aktivieren des Kiosk-Modus ein Passwort vergeben, kann er später unter Angabe des Passworts wieder deaktiviert werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NAVIGATION_WRAPAROUND,
   "Navigation umbrechen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NAVIGATION_WRAPAROUND,
   "Springe zum Anfang und/oder Ende, wenn die Grenzen einer Liste horizontal oder vertikal erreicht werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PAUSE_LIBRETRO,
   "Inhalte anhalten, wenn das Menü aktiv ist"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PAUSE_LIBRETRO,
   "Wenn deaktiviert, wird der Inhalt im Hintergrund weiterlaufen, wenn das RetroArch-Menü aufgerufen wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SAVESTATE_RESUME,
   "Inhalte fortsetzen, nachdem Speicherabbildungen verwendet wurden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SAVESTATE_RESUME,
   "Schließt das Menü automatisch und setzt den Inhalt fort, nachdem eine Speicherabbildung gespeichert oder geladen wurde. Durch Deaktivieren dieser Option kann die Speicherabbild-Leistung auf sehr langsamen Geräten verbessert werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_INSERT_DISK_RESUME,
   "Inhalte nach dem Discwechsel fortsetzen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_INSERT_DISK_RESUME,
   "Schließt das Menü automatisch und setzt den Inhalt fort, nachdem eine neue Disc eingelegt oder geladen wurde."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUIT_ON_CLOSE_CONTENT,
   "Nach dem Schließen von Inhalten, Programm beenden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUIT_ON_CLOSE_CONTENT,
   "Beendet RetroArch automatisch, wenn Inhalte geschlossen werden. 'CLI' wird nur beendet, wenn der Inhalt über die Befehlszeile gestartet wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MOUSE_ENABLE,
   "Maus-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MOUSE_ENABLE,
   "Ermöglicht die Steuerung des Menüs mit einer Maus."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_POINTER_ENABLE,
   "Touch-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_POINTER_ENABLE,
   "Ermöglicht die Steuerung des Menüs mit einem Touchscreen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THREADED_DATA_RUNLOOP_ENABLE,
   "Multithreading"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_THREADED_DATA_RUNLOOP_ENABLE,
   "Führe Aufgaben im Hintergrund aus."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PAUSE_NONACTIVE,
   "Inhalte anhalten, wenn nicht aktiv"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PAUSE_NONACTIVE,
   "Pausiere das Spiel, wenn RetroArch nicht das aktive Fenster ist."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DISABLE_COMPOSITION,
   "Deaktiviere Desktop-Gestaltung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_DISABLE_COMPOSITION,
   "Aktiviere oder deaktiviere Desktop-Gestaltung (nur Windows)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SCROLL_FAST,
   "Menü Scroll-Beschleunigung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SCROLL_FAST,
   "Maximale Geschwindigkeit des Cursors beim Halten einer Bildlaufrichtung."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UI_COMPANION_ENABLE,
   "UI-Companion aktivieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UI_COMPANION_START_ON_BOOT,
   "UI-Companion beim Booten starten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UI_MENUBAR_ENABLE,
   "Menüleiste"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DESKTOP_MENU_ENABLE,
   "Desktop-Menü (Neustart erforderlich)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UI_COMPANION_TOGGLE,
   "Desktop-Menü beim Start öffnen"
   )

/* Settings > User Interface > Views */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_VIEWS_SETTINGS,
   "Spielmenü"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_VIEWS_SETTINGS,
   "Die Sichtbarkeit von Menüelementen im Spielmenü umschalten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_VIEWS_SETTINGS,
   "Einstellungen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_VIEWS_SETTINGS,
   "Die Sichtbarkeit von Menüelementen im Einstellungs-Menü umschalten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_LOAD_CORE,
   "Zeige 'Core laden'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_LOAD_CORE,
   "Zeige/verstecke die Option 'Core laden'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_LOAD_CONTENT,
   "Zeige 'Inhalt laden'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_LOAD_CONTENT,
   "Zeige/verstecke die Option 'Inhalt laden'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_LOAD_DISC,
   "Zeige 'Disc laden'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_LOAD_DISC,
   "Zeige/verberge die Option 'Disc laden' im Hauptmenü."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_DUMP_DISC,
   "Zeige 'Disc dumpen'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_DUMP_DISC,
   "Zeige/verberge die Option 'Disc dumpen' im Hauptmenü."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_ONLINE_UPDATER,
   "Zeige 'Online Updater'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_ONLINE_UPDATER,
   "Zeige/verberge die Option 'Online Updater' im Hauptmenü."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_CORE_UPDATER,
   "Zeige 'Core Downloader'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_CORE_UPDATER,
   "Zeige/verberge die Funktion zum Aktualisieren der Cores (und der Info-Dateien)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_LEGACY_THUMBNAIL_UPDATER,
   "Legacy Miniaturansichts-Updater anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_LEGACY_THUMBNAIL_UPDATER,
   "Zeige/verberge die Möglichkeit zum Herunterladen älterer Miniaturansichtspakete."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_INFORMATION,
   "Zeige Informationen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_INFORMATION,
   "Zeige/verstecke die Option 'Informationen'"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_CONFIGURATIONS,
   "Zeige Konfigurationen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_CONFIGURATIONS,
   "Zeige/verstecke die Option 'Konfigurationen'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_HELP,
   "Zeige Hilfe"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_HELP,
   "Zeige/verstecke die Option 'Hilfe'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_QUIT_RETROARCH,
   "Zeige 'RetroArch beenden'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_QUIT_RETROARCH,
   "Zeige/verstecke die Option 'RetroArch beenden'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_RESTART_RETROARCH,
   "Zeige 'RetroArch neu starten'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_RESTART_RETROARCH,
   "Zeige/verberge die Option 'RetroArch neu starten' im Hauptmenü."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_SETTINGS,
   "Zeige Tab 'Einstellungen'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_SETTINGS,
   "Zeige den Reiter 'Einstellungen' im Hauptmenü an"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_SETTINGS_PASSWORD,
   "Kennwort zur Freigabe der 'Einstellungen' festlegen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_SETTINGS_PASSWORD,
   "Wird vor dem Verstecken der Einstellungen ein Passwort vergeben, wird es später möglich sein, den Reiter wiederherzustellen, in dem die Funktion 'Aktiviere den Reiter 'Einstellungen' ausgewählt und das Passwort dort eingegeben wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_FAVORITES,
   "Zeige Tab 'Favoriten'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_FAVORITES,
   "Zeige den Reiter 'Favoriten' im Hauptmenü an."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_IMAGES,
   "Zeige Tab 'Bilder'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_IMAGES,
   "Zeige den Reiter 'Bilder' im Hauptmenü an."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_MUSIC,
   "Zeige Tab 'Musik'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_MUSIC,
   "Zeige den Reiter 'Musik' im Hauptmenü an."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_VIDEO,
   "Zeige Tab 'Video'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_VIDEO,
   "Zeige den Reiter 'Video' im Hauptmenü an."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_NETPLAY,
   "Zeige Tab 'Netplay'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_NETPLAY,
   "Zeigen den Reiter 'Netplay' im Hauptmenü an."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_HISTORY,
   "Zeige Tab 'Verlauf'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_HISTORY,
   "Zeige den Reiter 'Verlauf' im Hauptmenü an."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_ADD,
   "Zeige Tab 'Inhalte importieren'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_ADD,
   "Zeige den Reiter 'Inhalte importieren' im Hauptmenü an."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_ADD_ENTRY,
   "Zeige 'Inhalte importieren'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_ADD_ENTRY,
   "Zeige einen Eintrag zum Importieren von Inhalten im Hauptmenü oder in dem Wiedergabelisten-Tab/-Untermenü."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_ADD_CONTENT_ENTRY_DISPLAY_MAIN_TAB,
   "Hauptmenü"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_ADD_CONTENT_ENTRY_DISPLAY_PLAYLISTS_TAB,
   "Wiedergabelisten-Menü"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_PLAYLISTS,
   "Zeige Wiedergabelisten-Tabs"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_PLAYLISTS,
   "Zeige die Reiter der Wiedergabelisten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_EXPLORE,
   "Zeige Tab 'Erkunden'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_EXPLORE,
   "Zeige den Reiter zum Erkunden von Inhalten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_ENABLE,
   "Uhrzeit / Datum anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_TIMEDATE_ENABLE,
   "Zeige das aktuelle Datum und/oder die Zeit im Menü an."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_STYLE,
   "Datum/Uhrzeit Stil"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_TIMEDATE_STYLE,
   "Ändert den Stil, in dem das aktuelle Datum und/oder die aktuelle Uhrzeit im Menü angezeigt werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DATE_SEPARATOR,
   "Datum Trennzeichen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_TIMEDATE_DATE_SEPARATOR,
   "Gibt das Zeichen an, das als Trennzeichen zwischen den Komponenten Jahr/Monat/Tag verwendet werden soll, wenn das aktuelle Datum im Menü angezeigt wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BATTERY_LEVEL_ENABLE,
   "Akkustand anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BATTERY_LEVEL_ENABLE,
   "Zeige den aktuellen Akkustand im Menü an."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_ENABLE,
   "Core-Namen anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_ENABLE,
   "Zeige den Namen des aktuellen Cores im Menü an."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_SUBLABELS,
   "Zeige Menübeschreibungen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_SUBLABELS,
   "Bietet zusätzliche Informationen zu Menüelementen."
   )
MSG_HASH( /* FIXME Not RGUI specific */
   MENU_ENUM_LABEL_VALUE_RGUI_SHOW_START_SCREEN,
   "Zeige Startbildschirm"
   )
MSG_HASH( /* FIXME Not RGUI specific */
   MENU_ENUM_SUBLABEL_RGUI_SHOW_START_SCREEN,
   "Zeige einen Startbildschirm im Menü an. Wird automatisch deaktiviert, nachdem das Programm zum ersten Mal gestartet wurde."
   )

/* Settings > User Interface > Views > Quick Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_RESUME_CONTENT,
   "Zeige 'Fortsetzen'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_RESUME_CONTENT,
   "Zeige/verberge die Option zum Fortsetzen des Ihnalts."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_RESTART_CONTENT,
   "Zeige 'Neu starten'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_RESTART_CONTENT,
   "Zeige/verberge die Option 'Neu starten'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_CLOSE_CONTENT,
   "Zeige 'Schließen'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_CLOSE_CONTENT,
   "Zeige/verberge die Option zum Schließen des Inhalts."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_TAKE_SCREENSHOT,
   "Zeige 'Bildschirmfoto erstellen'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_TAKE_SCREENSHOT,
   "Zeige/verstecke die Option 'Bildschirmfoto erstellen'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_SAVE_LOAD_STATE,
   "Zeige 'Zustand speichern/laden'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_SAVE_LOAD_STATE,
   "Zeige/verstecke die Optionen zum speichern und laden von Zuständen (Savestates)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_UNDO_SAVE_LOAD_STATE,
   "Zeige 'Zustand speichern/laden rückgängig machen'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_UNDO_SAVE_LOAD_STATE,
   "Zeige/verstecke die Optionen zum Rückgängigmachen vom Laden/Speichern von Zuständen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_ADD_TO_FAVORITES,
   "Zeige 'Zu Favoriten hinzufügen'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_ADD_TO_FAVORITES,
   "Zeige/verstecke die Option 'Zu Favoriten hinzufügen'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_START_RECORDING,
   "Zeige 'Aufnahme starten'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_START_RECORDING,
   "Vertikaler Overlay-Offset bei Verwendung der Hochformatanzeige. Positive Werte verschieben die Überlagerung nach oben, negative Werte nach unten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_START_STREAMING,
   "Zeige 'Streamen starten'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_START_STREAMING,
   "Zeige/verberge die Option 'Streamen starten'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_SET_CORE_ASSOCIATION,
   "Zeige 'Core zuordnen'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_SET_CORE_ASSOCIATION,
   "Zeige/verberge die Option 'Core zuordnen'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_RESET_CORE_ASSOCIATION,
   "Zeige 'Core-Zuordnung zurücksetzen'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_RESET_CORE_ASSOCIATION,
   "Zeige/verberge die Option 'Core-Zuordnung zurücksetzen'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_OPTIONS,
   "Zeige 'Optionen'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_OPTIONS,
   "Zeige/verstecke den Eintrag 'Optionen'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_CONTROLS,
   "Zeige 'Steuerung'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_CONTROLS,
   "Zeige/verstecke die Option 'Steuerung'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_CHEATS,
   "Zeige 'Cheats'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_CHEATS,
   "Zeige/verstecke die Option 'Cheats'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_SHADERS,
   "Zeige 'Shader'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_SHADERS,
   "Zeige/verstecke die Option 'Shader'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_REWIND,
   "Rückspuleinstellungen anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_REWIND,
   "Zeige/verberge die Option 'Zurückspulen'."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_LATENCY,
   "Zeige/verberge die Latenzeinstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_LATENCY,
   "Latenzeinstellungen anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_OVERLAYS,
   "Zeige/verberge die Overlayeinstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_OVERLAYS,
   "Overlayeinstellungen anzeigen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_VIDEO_LAYOUT,
   "Zeige 'Video-Layout'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_VIDEO_LAYOUT,
   "Zeige/verberge die Video-Layout-Einstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_SAVE_CORE_OVERRIDES,
   "Zeige 'Speichere Core-Überschreibungen'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_SAVE_CORE_OVERRIDES,
   "Zeige/verstecke die Option 'Speichere Core-Überschreibungen'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_SAVE_GAME_OVERRIDES,
   "Zeige 'Speichere Spiele-Überschreibungen'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_SAVE_GAME_OVERRIDES,
   "Zeige/verstecke die Option 'Speichere Spiele-Überschreibungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_INFORMATION,
   "Zeige 'Informationen'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_INFORMATION,
   "Zeige/verstecke die Option 'Informationen'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_DOWNLOAD_THUMBNAILS,
   "Zeige 'Miniaturansichten downloaden'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_DOWNLOAD_THUMBNAILS,
   "Zeige/verberge die Option 'Miniaturansichten downloaden'."
   )

/* Settings > User Interface > Views > Settings */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_DRIVERS,
   "Zeige 'Treiber'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_DRIVERS,
   "Zeige/verberge die Treibereinstellungen in den Einstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_VIDEO,
   "Zeige 'Video'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_VIDEO,
   "Zeige/verberge die Videoeinstellungen in den Einstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_AUDIO,
   "Zeige 'Audio'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_AUDIO,
   "Zeige/verberge die Audioeinstellungen in den Einstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_INPUT,
   "Zeige 'Eingabe'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_INPUT,
   "Zeige/verberge die Eingabeeinstellungen in den Einstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_LATENCY,
   "Zeige 'Latenz'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_LATENCY,
   "Zeige/verberge die Latenzeinstellungen in den Einstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_CORE,
   "Zeige 'Cores'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_CORE,
   "Zeige/verberge die Core-Einstellungen in den Einstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_CONFIGURATION,
   "Zeige 'Konfigurationen'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_CONFIGURATION,
   "Zeige/verberge die Konfigurationsdaten-Einstellungen in den Einstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_SAVING,
   "Zeige 'Speichern'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_SAVING,
   "Zeige/verberge die Spielstandseinstellungen in den Einstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_LOGGING,
   "Zeige 'Protokollierung'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_LOGGING,
   "Zeige/verberge die Protokollierungseinstellungen in den Einstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_FILE_BROWSER,
   "Zeige 'Dateibrowser'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_FILE_BROWSER,
   "Zeige/verberge die Dateibrowsereinstellungen in den Einstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_FRAME_THROTTLE,
   "Zeige 'Bildwiederholrate begrenzen'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_FRAME_THROTTLE,
   "Zeige/verberge die Bildwiederholrateneinstellungen in den Einstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_RECORDING,
   "Zeige 'Aufnahme'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_RECORDING,
   "Zeige/verberge die Aufnahmeeinstellungen in den Einstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_ONSCREEN_DISPLAY,
   "Zeige 'Bildschirm-Meldungen'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_ONSCREEN_DISPLAY,
   "Zeige/verberge die Einstellungen der Bildschirm-Meldungen in den Einstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_USER_INTERFACE,
   "Zeige 'Benutzeroberfläche'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_USER_INTERFACE,
   "Zeige/verberge die Benutzeroberflächeneinstellungen in den Einstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_AI_SERVICE,
   "Zeige 'KI-Dienst'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_AI_SERVICE,
   "Zeige/verberge die KI-Dienst-Einstellungen in den Einstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_ACCESSIBILITY,
   "Zeige 'Bedienungshilfen'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_ACCESSIBILITY,
   "Zeige/verberge die Bedienungshilfen in den Einstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_POWER_MANAGEMENT,
   "Zeige 'Energieverwaltung'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_POWER_MANAGEMENT,
   "Zeige/verberge die Energieverwaltung in den Einstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_ACHIEVEMENTS,
   "Zeige 'Errungenschaften'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_ACHIEVEMENTS,
   "Zeige/verberge die Errungenschaftseinstellungen in den Einstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_NETWORK,
   "Zeige 'Netzwerk'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_NETWORK,
   "Zeige/verberge die Netzwerkeinstellungen in den Einstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_PLAYLISTS,
   "Zeige 'Wiedergabelisten'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_PLAYLISTS,
   "Zeige/verberge die Wiedergabelisteneinstellungen in den Einstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_USER,
   "Zeige 'Benutzer'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_USER,
   "Zeige/verberge die Nutzereinstellungen in den Einstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_DIRECTORY,
   "Zeige 'Verzeichnisse'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_DIRECTORY,
   "Zeige/verberge die Verzeichnisseinstellungen in den Einstellungen."
   )

/* Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SCALE_FACTOR,
   "Menü-Skalierungsfaktor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SCALE_FACTOR,
   "Skaliert die Größe der Elemente der Benutzeroberfläche im Menü."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WALLPAPER,
   "Hitergrundbild"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WALLPAPER,
   "Lege ein Bild als Menühintergrund fest."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WALLPAPER_OPACITY,
   "Hintergrundbild-Transparenz"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WALLPAPER_OPACITY,
   "Legt die Deckkraft des Hintergrundbilds fest."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_FRAMEBUFFER_OPACITY,
   "Framebuffer-Transparenz"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_FRAMEBUFFER_OPACITY,
   "Modifiziere die Transparenz des Framebuffers."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_USE_PREFERRED_SYSTEM_COLOR_THEME,
   "Systemfarbthema verwenden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_USE_PREFERRED_SYSTEM_COLOR_THEME,
   "Das Farbthema des Betriebssystems verwenden (falls vorhanden) - überschreibt die Designeinstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAILS,
   "Miniaturansichten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_THUMBNAILS,
   "Art der Miniaturansichten, die verwendet werden soll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_THUMBNAIL_UPSCALE_THRESHOLD,
   "Miniaturansicht-Upscaling Schwellwert"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_THUMBNAIL_UPSCALE_THRESHOLD,
   "Skaliert Vorschaubilder mit einer Breite/Höhe, die kleiner als der angegebene Wert ist, automatisch. Verbessert die Bildqualität. Hat einen moderaten Einfluss auf die Leistung."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_TICKER_TYPE,
   "Lauftext-Animation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_TICKER_TYPE,
   "Wähle die horizontale Bildlaufmethode, mit der lange Menütexte angezeigt werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_TICKER_SPEED,
   "Lauftext-Geschwindigkeit"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_TICKER_SPEED,
   "Animationsgeschwindigkeit beim Scrollen von langem Menütext."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_TICKER_SMOOTH,
   "Gleichmäßiger Lauftext"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_TICKER_SMOOTH,
   "Eine geglättete Bildlaufanimation verwenden, wenn langer Menütext angezeigt wird. Hat einen geringen Einfluss auf die Leistung."
   )

/* Settings > AI Service */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_MODE,
   "KI-Dienst Ausgabeart"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_MODE,
   "Übersetzungen als Textüberlagerung anzeigen (Bildmodus) oder als Text-zu-Sprache abspielen (Sprachmodus)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_URL,
   "KI-Dienst URL"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_URL,
   "Eine http:// URL, die auf den zu verwendenden Übersetzungsdienst verweist."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_ENABLE,
   "KI-Dienst aktivieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_ENABLE,
   "Ermöglicht das Ausführen des KI-Dienstes beim Drücken des KI-Dienst-Hotkeys."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_PAUSE,
   "Während der Übersetzung pausieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_PAUSE,
   "Den Core anhalten, während die Anzeige übersetzt wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_SOURCE_LANG,
   "Ausgangssprache"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_SOURCE_LANG,
   "Die Sprache, die der Dienst übersetzen soll. Bei der Einstellung 'Egal' wird versucht, die Sprache automatisch zu erkennen. Das Auswählen einer Sprache verringert Fehler."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_TARGET_LANG,
   "Zielsprache"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_TARGET_LANG,
   "Die Sprache, in die der Dienst übersetzt. Bei der Einstellung 'Egal' wird Englisch verwendet."
   )

/* Settings > Accessibility */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCESSIBILITY_ENABLED,
   "Bedienungshilfe aktivieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACCESSIBILITY_ENABLED,
   "Liest Text vor (Text-zu-Sprache) um bei der Menünavigation zu unterstützen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCESSIBILITY_NARRATOR_SPEECH_SPEED,
   "Text-zu-Sprache Geschwindigkeit"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACCESSIBILITY_NARRATOR_SPEECH_SPEED,
   "Legt die Lesegeschwindigkeit der Text-zu-Sprache-Funktion fest."
   )

/* Settings > Power Management */

/* Settings > Achievements */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_ENABLE,
   "Errungenschaften aktivieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_ENABLE,
   "Verdiene Errungenschaften in klassischen Spielen. Weitere Informationen unter 'https://retroachievements.org'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_HARDCORE_MODE_ENABLE,
   "Hardcore-Modus"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_HARDCORE_MODE_ENABLE,
   "Verdoppelt den Punktegewinn.\nDeaktiviert das Erstellen von Speicherabbildern, Cheats, Zurückspulen, Anhalten und Zeitlupe für alle Spiele.\nWird diese Einstellung zur Laufzeit geändert, wird das Spiel neu gestartet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_LEADERBOARDS_ENABLE,
   "Bestenlisten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_LEADERBOARDS_ENABLE,
   "Spielspezifische Bestenlisten. Hat keine Auswirkung, wenn der Hardcore-Modus deaktiviert ist."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_RICHPRESENCE_ENABLE,
   "Sendet einen detaillierten Spielstatus an die RetroAchievements-Website."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_BADGES_ENABLE,
   "Errungenschaftenabzeichen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_BADGES_ENABLE,
   "Zeigt Abzeichen in der Errungenschaftenliste an."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_TEST_UNOFFICIAL,
   "Teste inoffizielle Errungenschaften"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_TEST_UNOFFICIAL,
   "Aktiviere inoffizielle Errungenschaften und/oder Beta-Funktionen zu Testzwecken."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_UNLOCK_SOUND_ENABLE,
   "Freischalt-Ton"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_UNLOCK_SOUND_ENABLE,
   "Einen Ton abspielen, wenn eine Errungenschaft freigeschaltet wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VERBOSE_ENABLE,
   "Ausführlicher Modus für Errungenschaften"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_VERBOSE_ENABLE,
   "Aktiviere ausführliche Ausgabe von Bildschirmmeldungen für Errungenschaften."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_AUTO_SCREENSHOT,
   "Automatische Bildschirmaufnahme"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_AUTO_SCREENSHOT,
   "Macht automatisch ein Bildschirmfoto, wenn eine Errungenschaft erzielt wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_START_ACTIVE,
   "Aktiviert starten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_START_ACTIVE,
   "Die Sitzung mit aktivierten Erfolgen (auch den zuvor freigeschalteten) starten."
   )

/* Settings > Network */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_PUBLIC_ANNOUNCE,
   "Netplay öffentlich ankündigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_PUBLIC_ANNOUNCE,
   "Lege fest, ob Netplay-Spiele öffentlich angekündigt werden sollen. Wenn deaktiviert, müssen sich Clients manuell verbinden und können die öffentliche Lobby nicht verwenden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_USE_MITM_SERVER,
   "Verwende Relay-Server"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_USE_MITM_SERVER,
   "Leite alle Netplay-Verbindungen durch einen Man-in-the-middle-Server. Hilfreich, wenn sich der Host hinter einer Firewall befindet oder Probleme mit NAT/UPnP hat."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_MITM_SERVER,
   "Relay-Server Standort"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_MITM_SERVER,
   "Wähle einen bestimmten Relay-Server aus. Geografisch näher gelegene Standorte weisen tendenziell geringere Latenzen auf."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_IP_ADDRESS,
   "Server-Adresse"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_IP_ADDRESS,
   "Die Adresse des Hosts, mit dem eine Verbindung hergestellt werden soll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_TCP_UDP_PORT,
   "Netplay TCP/UDP-Port"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_TCP_UDP_PORT,
   "Der Port der Host-IP-Adresse. Kann entweder ein TCP- oder ein UDP-Port sein."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_PASSWORD,
   "Server-Passwort"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_PASSWORD,
   "Das Kennwort, das von Clients verwendet wird, um sich mit dem Host zu verbinden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SPECTATE_PASSWORD,
   "Server-Passwort für Beobachtermodus"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_SPECTATE_PASSWORD,
   "Das Kennwort, das von Clients verwendet wird, die sich als Zuschauer mit dem Host verbinden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_START_AS_SPECTATOR,
   "Im Beobachtermodus starten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_START_AS_SPECTATOR,
   "Startet das Netplay im Zuschauermodus."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ALLOW_SLAVES,
   "Erlaube Slave-Modus für Clients"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_ALLOW_SLAVES,
   "Verbindungen im Slave-Modus zulassen. Slave-Modus-Clients benötigen auf beiden Seiten nur sehr wenig Rechenleistung, leiden jedoch erheblich unter der Netzwerklatenz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_REQUIRE_SLAVES,
   "Verbiete Clients, die nicht im Slave-Modus laufen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_REQUIRE_SLAVES,
   "Keine nicht-Slave-Modus-Verbindungen zulassen. Nicht empfohlen, außer für sehr schnelle Netzwerke mit sehr schwachen Maschinen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_STATELESS_MODE,
   "Netplay ohne Savestates"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_STATELESS_MODE,
   "Startet Netplay in einem Modus, der keine Speicherabbilder erfordert. Ein sehr schnelles Netzwerk ist erforderlich, aber es wird kein Zurückspulen durchgeführt, sodass kein Netplay-Jitter auftritt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_CHECK_FRAMES,
   "Netplay-Synchronisation prüfen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_CHECK_FRAMES,
   "Die Häufigkeit (in Frames), mit der Netplay überprüft, ob Host und Client synchron sind."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_INPUT_LATENCY_FRAMES_MIN,
   "Eingabeverzögerung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_INPUT_LATENCY_FRAMES_MIN,
   "Eingabeverzögerung in Einzelbildern, die im Netplay verwendet wird, um die Netzwerklatenz zu verbergen. Reduziert Bildruckeln und CPU-Last, verursacht jedoch erkennbare Eingabeverzögerung."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_INPUT_LATENCY_FRAMES_RANGE,
   "Erlaubte Eingabeverzögerung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_INPUT_LATENCY_FRAMES_RANGE,
   "Der Bereich der Eingabeverzögerung in Einzelbildern, die im Netplay verwendet werden kann, um die Netzwerklatenz zu verbergen. Reduziert Bildruckeln und CPU-Last, verursacht jedoch unvorhersehbare Eingabeverzögerungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_NAT_TRAVERSAL,
   "Netplay NAT-Traversal"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_NAT_TRAVERSAL,
   "Versucht als Host, mit Hilfe von UPnP oder ähnlichen Technologien zum Verlassen des eigenen LANs, auf eingehende Verbindungen aus dem öffentlichen Internet zu lauschen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_DIGITAL,
   "Freigabe digitaler Eingaben"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_REQUEST_DEVICE_I,
   "Gerät %u anfragen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_REQUEST_DEVICE_I,
   "Anfragen, mit dem angegebenen Eingabegerät zu spielen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_CMD_ENABLE,
   "Netzwerk-Befehle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_CMD_PORT,
   "Port für Netzwerk-Befehle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_REMOTE_ENABLE,
   "Netzwerk-RetroPad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_REMOTE_PORT,
   "Netzwerk-RetroPad Basisport"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_USER_REMOTE_ENABLE,
   "Nutzer %d Netzwerk-RetroPad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STDIN_CMD_ENABLE,
   "stdin-Befehle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_STDIN_CMD_ENABLE,
   "Aktiviere stdin-Befehlsschnittstelle."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_ON_DEMAND_THUMBNAILS,
   "On-Demand-Miniaturansichten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETWORK_ON_DEMAND_THUMBNAILS,
   "Fehlende Vorschaubilder automatisch herunterladen, während die Wiedergabelisten durchsucht werden. Hat schwerwiegende Auswirkungen auf die Leistung."
   )

/* Settings > Network > Updater */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_BUILDBOT_URL,
   "Buildbot-Core-URL"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_UPDATER_BUILDBOT_URL,
   "URL zum Core-Verzeichnis auf dem libretro-Buildbot."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BUILDBOT_ASSETS_URL,
   "Buildbot-Assets-URL"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BUILDBOT_ASSETS_URL,
   "URL zum Assets-Verzeichnis auf dem libretro-Buildbot."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_AUTO_EXTRACT_ARCHIVE,
   "Heruntergeladene Archive automatisch entpacken"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_UPDATER_AUTO_EXTRACT_ARCHIVE,
   "Entpacke Dateien, die sich in heruntergeladenen Archiven befinden, nach dem Download automatisch."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_SHOW_EXPERIMENTAL_CORES,
   "Experimentelle Cores anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_UPDATER_SHOW_EXPERIMENTAL_CORES,
   "'Experimentelle' Cores in der Core-Downloader-Liste auflisten. Diese dienen normalerweise nur zu Entwicklungs-/Testzwecken und werden nicht für den allgemeinen Gebrauch empfohlen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_AUTO_BACKUP,
   "Backup von Cores bei Aktualisierung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_UPDATER_AUTO_BACKUP,
   "Erstellt automatisch Sicherungskopien aller installierten Cores, wenn ein Online-Update ausgeführt wird. Ermöglicht einfaches Zurücksetzen auf einen funktionierenden Core, wenn das Update eine Regression einführt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_AUTO_BACKUP_HISTORY_SIZE,
   "Maximale Anzahl an Core-Backups"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_UPDATER_AUTO_BACKUP_HISTORY_SIZE,
   "Gibt an, wie viele automatisch generierte Sicherungen für jeden installierten Core aufbewahrt werden sollen. Wenn diese Grenze erreicht ist, wird beim Erstellen einer neuen Sicherung über ein Online-Update die älteste Sicherung gelöscht. Manuelle Core-Sicherungen sind von dieser Einstellung nicht betroffen."
   )

/* Settings > Playlists */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HISTORY_LIST_ENABLE,
   "Verlauf"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_HISTORY_LIST_ENABLE,
   "Aktiviere Playlist für kürzlich geöffnete Inhalte."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_HISTORY_SIZE,
   "Länge der Verlaufsliste"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_HISTORY_SIZE,
   "Begrenzt die Anzahl der Einträge in der Verlaufsliste."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_FAVORITES_SIZE,
   "Favoritenanzahl"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_FAVORITES_SIZE,
   "Begrenzt die Anzahl der Einträge in der Favoritenliste. Sobald das Limit erreicht ist, werden neue Ergänzungen verhindert, bis alte Einträge entfernt wurden. Das Festlegen eines Werts von -1 ermöglicht unbegrenzte Einträge. WARNUNG: Durch Verringern des Werts werden vorhandene Einträge gelöscht!"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_ENTRY_RENAME,
   "Umbenennen von Einträgen erlauben"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_ENTRY_RENAME,
   "Dem Benutzer erlauben, Einträge in den Wiedergabelisten umzubenennen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_ENTRY_REMOVE,
   "Erlaubt, Einträge zu entfernen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_ENTRY_REMOVE,
   "Erlaube dem Benutzer, Einträge aus den Playlists zu entfernen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SORT_ALPHABETICAL,
   "Wiedergabelisten alphabetisch sortieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SORT_ALPHABETICAL,
   "Sortiert Inhaltswiedergabelisten in alphabetischer Reihenfolge, mit Ausnahme der Wiedergabelisten 'Verlauf', 'Bilder', 'Musik' und 'Videos'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_USE_OLD_FORMAT,
   "Wiedergabelisten im alten Format abspeichern"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_USE_OLD_FORMAT,
   "Schreibt Wiedergabelisten im veralteten Klartextformat. Wenn deaktiviert, werden Wiedergabelisten mit JSON formatiert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_COMPRESSION,
   "Wiedergabelisten komprimieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_COMPRESSION,
   "Archiviert Wiedergabelistendaten beim Schreiben auf die Festplatte. Reduziert die Dateigröße und Ladezeiten auf Kosten einer (vernachlässigbar) erhöhten CPU-Auslastung. Kann mit Wiedergabelisten im alten oder neuen Format verwendet werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SHOW_INLINE_CORE_NAME,
   "Zugeoednete Cores in Wiedergabelisten anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SHOW_INLINE_CORE_NAME,
   "Gib an, wann Wiedergabelisteneinträge mit dem aktuell zugeordneten Core gekennzeichnet werden sollen (falls vorhanden). HINWEIS: Diese Einstellung wird ignoriert, wenn Sublabels für Wiedergabelisten aktiviert sind."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SHOW_SUBLABELS,
   "Sublabels zu Wiedergabelisten anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SHOW_SUBLABELS,
   "Zeigt zusätzliche Informationen für jeden Wiedergabelisteneintrag an, z. B. die aktuelle Core-Zuordnung und die Laufzeit (falls verfügbar). Hat einen variablen Einfluss auf die Leistung."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SUBLABEL_CORE,
   "Cores:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SUBLABEL_RUNTIME,
   "Spielzeit:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SUBLABEL_LAST_PLAYED,
   "Zuletzt gespielt:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SUBLABEL_RUNTIME_TYPE,
   "Wiedergabelisten-Sublabel Laufzeit"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SUBLABEL_RUNTIME_TYPE,
   "Legt fest, welche Art von Laufzeitprotokolldaten in Wiedergabelisten-Sublabels angezeigt werden soll. (Beachte, dass das entsprechende Laufzeitprotokoll über das Optionsmenü 'Speichern' aktiviert werden muss.)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SUBLABEL_LAST_PLAYED_STYLE,
   "'Zuletzt gespielt' Datum-und-Zeit Stil"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SUBLABEL_LAST_PLAYED_STYLE,
   "Legt den Stil des Datums und der Uhrzeit fest, die für die Zeitstempelinformationen 'Zuletzt gespielt' angezeigt werden. HINWEIS: Die '(AM/PM)' Optionen haben auf einigen Plattformen (geringe) Auswirkungen auf die Leistung."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_FUZZY_ARCHIVE_MATCH,
   "Wenn Wiedergabelisten nach Einträgen durchsucht werden, welche komprimierten Dateien zugeordnet sind, wird nur der Name der Archivdatei statt [file name] + [content] abgeglichen. Aktiviere diese Option, um doppelte Inhaltsverlaufseinträge beim Laden komprimierter Dateien zu vermeiden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCAN_WITHOUT_CORE_MATCH,
   "Ohne Core-Übereinstimmung scannen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SCAN_WITHOUT_CORE_MATCH,
   "Wenn deaktiviert, werden Inhalte nur dann zu Wiedergabelisten hinzugefügt, wenn ein Core installiert ist, der die Dateitypen unterstützt. Wenn diese Option aktiviert ist, werden Inhalte unabhängig davon zu Wiedergabelisten hinzugefügt. Auf diese Weise können Cores im Nachhinein nach Bedarf installiert werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LIST,
   "Wiedergabelisten verwalten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_LIST,
   "Wartungsaufgaben an Wiedergabelisten ausführen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_PORTABLE_PATHS,
   "Portable Wiedergabelisten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_PORTABLE_PATHS,
   "Wenn diese Option aktiviert ist und auch das Verzeichnis 'Dateibrowser' ausgewählt ist, wird der aktuelle Wert des Parameters 'Dateibrowser' in der Wiedergabeliste gespeichert. Wenn die Wiedergabeliste auf ein anderes System geladen wird, auf dem dieselbe Option aktiviert ist, wird der Wert des Parameters 'Dateibrowser' mit dem Wert der Wiedergabeliste verglichen. Wenn dies nicht der Fall ist, werden die Pfade der Wiedergabelisteneinträge automatisch korrigiert."
   )

/* Settings > Playlists > Playlist Management */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_DEFAULT_CORE,
   "Standard-Core"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_DEFAULT_CORE,
   "Gib den Core an, der beim Starten von Inhalten über einen Wiedergabelisteneintrag verwendet werden soll, dem kein Core zugeordnet wurde."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_RESET_CORES,
   "Core-Zuordnungen zurücksetzen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_RESET_CORES,
   "Vorhandene Core-Zuordnungen für alle Wiedergabelisteneinträge entfernen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE,
   "Bezeichnungen Anzeigemodus"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE,
   "Die Art und Weise, wie die Inhaltsbezeichnungen in dieser Wiedergabeliste angezeigt werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_SORT_MODE,
   "Sortiermethode"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_SORT_MODE,
   "Legt fest, wie Einträge in dieser Wiedergabeliste sortiert werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_CLEAN_PLAYLIST,
   "Wiedergabeliste bereinigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_CLEAN_PLAYLIST,
   "Überprüft die Core-Zuordnungen und entfernt ungültige und doppelte Einträge."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DELETE_PLAYLIST,
   "Wiedergabeliste löschen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DELETE_PLAYLIST,
   "Wiedergabeliste vom Dateisystem entfernen."
   )

/* Settings > User */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PRIVACY_SETTINGS,
   "Privatsphäre"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PRIVACY_SETTINGS,
   "Ändere deine Privatsphären-Einstellungen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_LIST,
   "Benutzerkonten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACCOUNTS_LIST,
   "Verwalte die aktuell konfigurierten Benutzerkonten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_NICKNAME,
   "Benutzername"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_NICKNAME,
   "Gib deinen Benutzernamen hier ein. Dieser wird unter anderem für Netplay-Sitzungen verwendet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USER_LANGUAGE,
   "Sprache"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_USER_LANGUAGE,
   "Legt die Sprache der Benutzeroberfläche fest."
   )

/* Settings > User > Privacy */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CAMERA_ALLOW,
   "Erlaube Kamera-Zugriff"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CAMERA_ALLOW,
   "Erlaube oder verbiete den Cores Zugriff auf die Kamera."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_ALLOW,
   "Discord aktivieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISCORD_ALLOW,
   "Ermöglicht der Discord-App, mehr Daten über den abgespielten Inhalt anzuzeigen.\nHINWEIS: Es funktioniert nicht mit der Browserversion, sondern nur mit dem nativen Desktop-Client."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOCATION_ALLOW,
   "Standortbestimmung erlauben"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOCATION_ALLOW,
   "Erlaube oder verbiete den Cores Zugriff auf Ortsdienste."
   )

/* Settings > User > Accounts */

MSG_HASH(
   MENU_ENUM_SUBLABEL_ACCOUNTS_RETRO_ACHIEVEMENTS,
   "Verdiene Erfolge in klassischen Spielen. Weitere Informationen unter 'https://retroachievements.org'."
   )

/* Settings > User > Accounts > RetroAchievements */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_CHEEVOS_USERNAME,
   "Benutzername"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_USERNAME,
   "Gib den Benutzernamen deines RetroAchievements-Kontos ein."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_CHEEVOS_PASSWORD,
   "Passwort"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_PASSWORD,
   "Gib das Passwort deines RetroAchievements-Kontos ein. Maximale Länge: 255 Zeichen."
   )

/* Settings > User > Accounts > YouTube */


/* Settings > User > Accounts > Twitch */


/* Settings > User > Accounts > Facebook Gaming */


/* Settings > Directory */

MSG_HASH(
   MENU_ENUM_SUBLABEL_SYSTEM_DIRECTORY,
   "Lege das Systemverzeichnis fest. Cores können dieses Verzeichnis verwenden, um ein BIOS, system-spezifische Konfigurationen usw. zu laden."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_ASSETS_DIRECTORY,
   "Alle heruntergeladenen Dateien werden in diesem Verzeichnis gespeichert."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ASSETS_DIRECTORY,
   "Von RetroArch verwendete Menü-Assets werden in diesem Verzeichnis gespeichert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DYNAMIC_WALLPAPERS_DIRECTORY,
   "Dynamische Hintergrundbilder"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DYNAMIC_WALLPAPERS_DIRECTORY,
   "Verzeichnis, in dem Hintergrundbilder gespeichert werden, die vom Menü je nach verwendetem Inhalt geladen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAILS_DIRECTORY,
   "Miniaturansichten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_THUMBNAILS_DIRECTORY,
   "Ergänzende Miniaturansichten (Boxarts, Bildschirmfotos...) werden hier gespeichert."
   )
MSG_HASH( /* FIXME Not RGUI specific */
   MENU_ENUM_LABEL_VALUE_RGUI_BROWSER_DIRECTORY,
   "Dateibrowser"
   )
MSG_HASH( /* FIXME Not RGUI specific */
   MENU_ENUM_SUBLABEL_RGUI_BROWSER_DIRECTORY,
   "Legt das Startverzeichnis für den Dateibrowser fest."
   )
MSG_HASH( /* FIXME Not RGUI specific */
   MENU_ENUM_LABEL_VALUE_RGUI_CONFIG_DIRECTORY,
   "Konfigurationen"
   )
MSG_HASH( /* FIXME Not RGUI specific */
   MENU_ENUM_SUBLABEL_RGUI_CONFIG_DIRECTORY,
   "Legt das Verzeichnis fest, in dem das Menü mit der Suche nach Konfigurationen beginnt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LIBRETRO_DIR_PATH,
   "Cores"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LIBRETRO_DIR_PATH,
   "Verzeichnis, in dem das Programm nach Inhalten/Cores sucht."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LIBRETRO_INFO_PATH,
   "Core-Informationen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LIBRETRO_INFO_PATH,
   "Awendungs- und Core-Informationsdateien werden hier gespeichert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_DATABASE_DIRECTORY,
   "Inhaltsdatenbank"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_DATABASE_DIRECTORY,
   "Datenbanken werden in diesem Verzeichnis gespeichert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CURSOR_DIRECTORY,
   "Suchanfragen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CURSOR_DIRECTORY,
   "Gespeicherte Suchanfragen werden in diesem Verzeichnis gespeichert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DATABASE_PATH,
   "Cheat-Datei"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_DATABASE_PATH,
   "Verzeichnis, in dem alle Cheat-Dateien gespeichert werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FILTER_DIR,
   "Grafikfilter"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FILTER_DIR,
   "Verzeichnis, in dem alle CPU-basierten Videofilter gespeichert werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_FILTER_DIR,
   "Audiofilter"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_FILTER_DIR,
   "Verzeichnis, in dem alle Audio-DSP-Filter gespeichert werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_DIR,
   "Video-Shader"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_DIR,
   "Verzeichnis, in dem alle GPU-basierten Video-Shader gespeichert werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORDING_OUTPUT_DIRECTORY,
   "Aufnahmen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RECORDING_OUTPUT_DIRECTORY,
   "Aufnahmen werden in diesem Verzeichnis abgelegt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORDING_CONFIG_DIRECTORY,
   "Aufnahme-Konfigurationen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RECORDING_CONFIG_DIRECTORY,
   "Aufzeichnungskonfigurationen werden in diesem Verzeichnis gespeichert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_DIRECTORY,
   "Overlays"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_DIRECTORY,
   "Overlays werden in diesem Verzeichnis gespeichert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_LAYOUT_DIRECTORY,
   "Video-Layouts"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_LAYOUT_DIRECTORY,
   "Das Verzeichnis, in dem Video-Layouts für den einfachen Zugriff aufbewahrt werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCREENSHOT_DIRECTORY,
   "Bildschirmfotos"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SCREENSHOT_DIRECTORY,
   "Verzeichnis, in dem alle Bildschirmfotos abgelegt werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_JOYPAD_AUTOCONFIG_DIR,
   "Automatische Konfiguration von Controllern"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_JOYPAD_AUTOCONFIG_DIR,
   "In diesem Verzeichnis werden Controller-Profile gespeichert, mit denen Controller automatisch konfiguriert werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_REMAPPING_DIRECTORY,
   "Tastenbelegungen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_REMAPPING_DIRECTORY,
   "Eingabe-Remaps werden in diesem Verzeichnis gespeichert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_DIRECTORY,
   "Wiedergabelisten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_DIRECTORY,
   "Speichere alle Playlists in diesem Verzeichnis."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUNTIME_LOG_DIRECTORY,
   "Laufzeitprotokolle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUNTIME_LOG_DIRECTORY,
   "Laufzeitprotokolle werden in diesem Verzeichnis gespeichert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVEFILE_DIRECTORY,
   "Speicherdaten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVEFILE_DIRECTORY,
   "Alle Speicherdaten werden in diesem Verzeichnis gespeichert. Wenn kein Verzeichnis festgelegt ist, wird versucht, die Datei im Arbeitsverzeichnis des Inhalts zu speichern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_DIRECTORY,
   "Speicherzustände"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_DIRECTORY,
   "Alle Speicherabbilder in diesem Verzeichnis sichern. Wenn kein Verzeichnis festgelegt ist, wird versucht, die Datei im Arbeitsverzeichnis des Inhalts zu speichern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CACHE_DIRECTORY,
   "Temporäre Dateien"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CACHE_DIRECTORY,
   "Wenn ein Verzeichnis gewählt wird, wird Inhalt, der temporär entpackt wird (z.B. aus Archiven) in dieses Verzeichnis entpackt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOG_DIR,
   "Systemereignisprotokolle"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOG_DIR,
   "Systemereignisprotokolle werden in diesem Verzeichnis gespeichert."
   )

/* Music */

/* Music > Quick Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TO_MIXER,
   "Zum Mixer hinzufügen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ADD_TO_MIXER,
   "Diese Audiospur einem verfügbaren Audiostreamslot hinzufügen. Wenn momentan kein Slot verfügbar ist, wird dies ignoriert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TO_MIXER_AND_PLAY,
   "Zum Mixer hinzufügen und abspielen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ADD_TO_MIXER_AND_PLAY,
   "Diese Audiospur einem verfügbaren Audiostreamslot hinzufügen und sie wiedergeben. Wenn momentan kein Slot verfügbar ist, wird dies ignoriert."
   )

/* Netplay */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ENABLE_CLIENT,
   "Verbinde zu einem Netplay-Host"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_ENABLE_CLIENT,
   "Aktiviere Netplay im Client-Modus."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_DISCONNECT,
   "Verbindung trennen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_DISCONNECT,
   "Beendet eine aktive Netplay-Verbindung."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_REFRESH_ROOMS,
   "Die Netplay-Hostliste aktualisieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_REFRESH_ROOMS,
   "Nach Netplay-Hosts suchen."
   )

/* Netplay > Host */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ENABLE_HOST,
   "Starte Hosting"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_ENABLE_HOST,
   "Aktiviere Netplay im Host-Modus (Server)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_DISABLE_HOST,
   "Netplay-Host stoppen"
   )

/* Import content */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCAN_DIRECTORY,
   "Verzeichnis durchsuchen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SCAN_DIRECTORY,
   "Durchsuche ein Verzeichnis nach kompatiblen Dateien."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCAN_THIS_DIRECTORY,
   "<Dieses Verzeichnis durchsuchen>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCAN_FILE,
   "Datei durchsuchen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SCAN_FILE,
   "Untersuche eine kompatible Datei."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_LIST,
   "Manueller Scan"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_LIST,
   "Konfigurierbarer Scan basierend auf den Namen der Inhaltsdateien. Erfordert nicht, dass der Inhalt mit den Datenbanken übereinstimmt."
   )

/* Import content > Scan File */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TO_MIXER_AND_COLLECTION,
   "Zum mixer hinzufügen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TO_MIXER_AND_COLLECTION_AND_PLAY,
   "Zum Mixer hinzufügen und abspielen"
   )

/* Import content > Manual Scan */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_DIR,
   "Inhaltsverzeichnis"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_DIR,
   "Wähle ein Verzeichnis aus, in dem nach Inhalten gesucht werden soll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SYSTEM_NAME,
   "Systemname"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_SYSTEM_NAME,
   "Einen 'Systemnamen' angeben, dem gefundene Inhalte zugeordnet werden sollen. Wird verwendet, um die generierte Wiedergabelistendatei zu benennen und Vorschaubilder der Wiedergabeliste zu identifizieren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SYSTEM_NAME_CUSTOM,
   "Benutzerdefinierter Systemname"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_SYSTEM_NAME_CUSTOM,
   "Manuell einen 'Systemnamen' für gefundene Inhalte angeben. Wird nur verwendet, wenn 'Systemname' auf '<Custom>' gesetzt ist."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_CORE_NAME,
   "Standard-Core"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_CORE_NAME,
   "Einen Standardkern auswählen, der beim Starten gefundener Inhalte verwendet werden soll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_FILE_EXTS,
   "Dateierweiterungen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_FILE_EXTS,
   "Liste der Dateitypen, die in den Scan aufgenommen werden sollen, getrennt durch Leerzeichen. Wenn leer, enthält es alle Dateitypen oder wenn ein Core angegeben ist, alle vom Core unterstützten Dateien."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SEARCH_RECURSIVELY,
   "Rekursiv scannen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_SEARCH_RECURSIVELY,
   "Wenn diese Option aktiviert ist, werden alle Unterverzeichnisse des angegebenen 'Inhaltsverzeichnises' in den Scan einbezogen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SEARCH_ARCHIVES,
   "In Archiven scannen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_SEARCH_ARCHIVES,
   "Wenn diese Option aktiviert ist, werden Archivdateien (.zip, .7z usw.) nach gültigen/unterstützten Inhalten durchsucht. Kann einen erheblichen Einfluss auf die Scanleistung haben."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_DAT_FILE,
   "Arcade DAT-Datei"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_DAT_FILE,
   "Wähle eine Logiqx oder MAME XML-DAT-Datei aus, um die automatische Benennung von gescannten Arcade-Inhalten (MAME, FinalBurn Neo usw.) zu ermöglichen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_DAT_FILE_FILTER,
   "Arcade DAT-Filter"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_DAT_FILE_FILTER,
   "Wenn eine Arcade-DAT-Datei verwendet wird, werden der Wiedergabeliste nur Inhalte hinzugefügt, wenn ein passender DAT-Dateieintrag gefunden wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_OVERWRITE,
   "Vorhandene Wiedergabelisten überschreiben"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_OVERWRITE,
   "Wenn diese Option aktiviert ist, wird jede vorhandene Wiedergabeliste vor dem Scannen von Inhalten gelöscht. Wenn deaktiviert, bleiben vorhandene Wiedergabelisteneinträge erhalten und es werden nur Inhalte hinzugefügt, die in der Wiedergabeliste fehlen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_START,
   "Scan starten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_START,
   "Ausgewählten Inhalt scannen."
   )

/* Explore tab */
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_CATEGORY_RELEASE_YEAR,
   "Erscheinungsjahr"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_CATEGORY_PLAYER_COUNT,
   "Spieleranzahl"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_CATEGORY_TAG,
   "Tag (Etikett)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_SEARCH_NAME,
   "Namenssuche ..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_SHOW_ALL,
   "Alles anzeigen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_ADDITIONAL_FILTER,
   "Zusätzlicher Filter"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_ALL,
   "Alles"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_ADD_ADDITIONAL_FILTER,
   "Zusätzlichen Filter hinzufügen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_ITEMS_COUNT,
   "%u Einträge"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_DEVELOPER,
   "Nach Entwickler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_PUBLISHER,
   "Nach Publisher"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_RELEASE_YEAR,
   "Nach Erscheinungsjahr"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_PLAYER_COUNT,
   "Nach Spielerzahl"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_GENRE,
   "Nach Genre"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_ORIGIN,
   "Nach Ursprung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_REGION,
   "Nach Region"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_FRANCHISE,
   "Nach Franchise"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_TAG,
   "Nach Tag (Etikett)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_SYSTEM_NAME,
   "Nach Systemname"
   )

/* Playlist > Playlist Item */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN,
   "Starten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUN,
   "Starte den Inhalt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RENAME_ENTRY,
   "Umbenennen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RENAME_ENTRY,
   "Titel dieses Eintrags umbenennen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DELETE_ENTRY,
   "Von der Liste löschen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DELETE_ENTRY,
   "Entferne diesen Eintrag aus der Playlist."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TO_FAVORITES_PLAYLIST,
   "Zu Favoriten hinzufügen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ADD_TO_FAVORITES_PLAYLIST,
   "Füge diesen Eintrag zu deinen Favoriten hinzu."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SET_CORE_ASSOCIATION,
   "Core zuordnen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESET_CORE_ASSOCIATION,
   "Core-Zuordnung zurücksetzen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INFORMATION,
   "Informationen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INFORMATION,
   "Zeige weiterführende Informationen über diesen Inhalt an."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWNLOAD_PL_ENTRY_THUMBNAILS,
   "Miniaturansichten herunterladen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DOWNLOAD_PL_ENTRY_THUMBNAILS,
   "Screenshot-/Box-Art-/Titelbild-Miniaturbilder für den aktuellen Inhalt herunterladen. Aktualisiert alle vorhandenen Vorschaubilder."
   )

/* Playlist Item > Set Core Association */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DETECT_CORE_LIST_OK_CURRENT_CORE,
   "Aktueller Core"
   )

/* Playlist Item > Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_PATH,
   "Dateipfad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_CORE_NAME,
   "Cores"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_RUNTIME,
   "Spielzeit"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_LAST_PLAYED,
   "Zuletzt gespielt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_DATABASE,
   "Inhaltsdatenbank"
   )

/* Quick Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESUME_CONTENT,
   "Fortsetzen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESUME_CONTENT,
   "Setze den aktuellen Inhalt wieder fort und verlasse das Spielmenü"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESTART_CONTENT,
   "Neu starten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESTART_CONTENT,
   "Startet den Inhalt von Anfang an neu."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLOSE_CONTENT,
   "Schließen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CLOSE_CONTENT,
   "Schließt das aktuelle Spiel. Alle nicht gespeicherten Änderungen können verloren gehen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TAKE_SCREENSHOT,
   "Bildschirmfoto anfertigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_TAKE_SCREENSHOT,
   "Fertigt ein Foto des Bildschirms an."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STATE_SLOT,
   "Spielstand-Speicherplatz"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_STATE_SLOT,
   "Ändert den aktuell gewählten Spielstand-Speicherplatz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_STATE,
   "Aktuellen Zustand speichern"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_STATE,
   "Speichere einen Zustand in dem aktuellen Speicherplatz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_STATE,
   "Spielstand laden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOAD_STATE,
   "Lade einen gespeicherten Zustand aus dem aktuellen Speicherplatz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UNDO_LOAD_STATE,
   "Laden des Zustands rückgängig machen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_UNDO_LOAD_STATE,
   "Wenn ein Zustand (Savestate) geladen wurde, wird der Inhalt zum Zustand vor dem Laden des Spielstandes zurückkehren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UNDO_SAVE_STATE,
   "Speichern des Zustands rückgängig machen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_UNDO_SAVE_STATE,
   "Wenn ein Speicherzustand überschrieben wurde, wird es auf den vorherigen Zustand zurückgesetzt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TO_FAVORITES,
   "Zu Favoriten hinzufügen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ADD_TO_FAVORITES,
   "Füge diesen Eintrag zu deinen Favoriten hinzu."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_START_RECORDING,
   "Aufnahme starten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_START_RECORDING,
   "Startet die Aufnahme."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_STOP_RECORDING,
   "Aufnahme beenden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_STOP_RECORDING,
   "Beendet die Aufnahme"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_START_STREAMING,
   "Streamen starten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_START_STREAMING,
   "Startet das Streamen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_STOP_STREAMING,
   "Streamen beenden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_STOP_STREAMING,
   "Beendet das Streamen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_OPTIONS,
   "Optionen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_OPTIONS,
   "Ändere die Optionen für die aktuell laufende Anwendung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INPUT_REMAPPING_OPTIONS,
   "Steuerung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_INPUT_REMAPPING_OPTIONS,
   "Ändere die Steuerung für den aktuell laufenden Inhalt."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_CHEAT_OPTIONS,
   "Verwende Cheat-Codes."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISK_OPTIONS,
   "Datenträger-Optionen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISK_OPTIONS,
   "Verwaltung von Datenträger-Abbildern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_OPTIONS,
   "Shader"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SHADER_OPTIONS,
   "Verwende Shader, um die Videodarstellung zu verbessern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_OVERRIDE_OPTIONS,
   "Überschreibungen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_OVERRIDE_OPTIONS,
   "Optionen zum überschreiben der globalen Konfiguration."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_LIST,
   "Errungenschaften"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACHIEVEMENT_LIST,
   "Erfolge und zugehörige Einstellungen anzeigen."
   )

/* Quick Menu > Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GAME_SPECIFIC_OPTIONS_CREATE,
   "Erstellt Datei mit Spieloptionen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GAME_SPECIFIC_OPTIONS_IN_USE,
   "Spieloptionen"
   )

/* Quick Menu > Controls */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_LOAD,
   "Remap-Datei laden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_SAVE_CORE,
   "Speichere Core-Remap-Datei"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_REMOVE_CORE,
   "Lösche Core-Remap-Datei"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_SAVE_CONTENT_DIR,
   "Inhaltsverzeichnis-Remap-Datei speichern"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_REMOVE_CONTENT_DIR,
   "Remap-Datei für das Spielinhaltsverzeichnis löschen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_SAVE_GAME,
   "Speichere Spiel-Remap-Datei"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_REMOVE_GAME,
   "Lösche Spiel-Remap-Datei"
   )

/* Quick Menu > Controls > Load Remap File */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE,
   "Remap-Datei"
   )

/* Quick Menu > Cheats */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_START_OR_CONT,
   "Cheatsuche starten oder fortsetzen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE_LOAD,
   "Cheat-Datei laden (ersetzen)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_FILE_LOAD,
   "Eine Cheat-Datei laden und bereits angewandte Cheats überschreiben."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE_LOAD_APPEND,
   "Cheat-Datei laden (Anhängen)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_FILE_LOAD_APPEND,
   "Eine Cheat-Datei laden und an vorhandene Cheats anhängen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RELOAD_CHEATS,
   "Spielspezifische Cheats neu laden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE_SAVE_AS,
   "Speichere Cheat-Datei unter ..."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_FILE_SAVE_AS,
   "Speichere aktuellen Cheats als Speicherdatei."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADD_NEW_TOP,
   "Neuen Cheat nach oben hinzufügen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADD_NEW_BOTTOM,
   "Neuen Cheat nach unten hinzufügen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DELETE_ALL,
   "Alle Cheats löschen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_APPLY_AFTER_LOAD,
   "Cheats beim Laden des Spiels automatisch anwenden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_APPLY_AFTER_TOGGLE,
   "Sofort anwenden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_APPLY_AFTER_TOGGLE,
   "Cheats sofort nach dem Einschalten anwenden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_APPLY_CHANGES,
   "Änderungen übernehmen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_APPLY_CHANGES,
   "Änderungen an den Cheats werden sofort übernommen."
   )

/* Quick Menu > Cheats > Start or Continue Cheat Search */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_START_OR_RESTART,
   "Cheat-Suche starten oder neu starten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_START_OR_RESTART,
   "Links/Rechts um die Bitgröße zu ändern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_EXACT,
   "Durchsuche Speicher nach Werten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_SEARCH_EXACT,
   "Drücke Links oder Rechts, um den Wert zu ändern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_EXACT_VAL,
   "Gleich zu %u (%X)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_LT,
   "Durchsuche Speicher nach Werten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_LT_VAL,
   "Kleiner als vorher"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_LTE,
   "Durchsuche Speicher nach Werten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_LTE_VAL,
   "Kleiner als oder gleich zu vorher"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_GT,
   "Durchsuche Speicher nach Werten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_GT_VAL,
   "Größer als vorher"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_GTE,
   "Durchsuche Speicher nach Werten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_GTE_VAL,
   "Größer als oder gleich zu vorher"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_EQ,
   "Durchsuche Speicher nach Werten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_EQ_VAL,
   "Gleich zu vorher"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_NEQ,
   "Durchsuche Speicher nach Werten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_NEQ_VAL,
   "Nicht gleich zu vorher"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_EQPLUS,
   "Durchsuche Speicher nach Werten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_SEARCH_EQPLUS,
   "Links/Rechts um den Wert zu ändern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_EQPLUS_VAL,
   "Gleich zu vorher +%u (%X)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_EQMINUS,
   "Durchsuche Speicher nach Werten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_SEARCH_EQMINUS,
   "Links/Rechts um den Wert zu ändern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_EQMINUS_VAL,
   "Gleich zu vorher +%u (%X)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADD_MATCHES,
   "Die %u Treffer zu Deiner Liste hinzufügen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DELETE_MATCH,
   "Lösche Treffer #"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_COPY_MATCH,
   "Erstelle Code zu Treffer #"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_MATCH,
   "Speicheradresse des Treffers: %08X Maske: %02X"
   )

/* Quick Menu > Cheats > Load Cheat File (Replace) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE,
   "Cheat-Datei"
   )

/* Quick Menu > Cheats > Load Cheat File (Append) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE_APPEND,
   "Cheat-Datei (Anhängen)"
   )

/* Quick Menu > Cheats > Cheat Details */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DETAILS_SETTINGS,
   "Cheat-Details"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_IDX,
   "Indexposition in der Liste."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_STATE,
   "Aktiviert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DESC,
   "Beschreibung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_MEMORY_SEARCH_SIZE,
   "Speicher-Suchgröße"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_TYPE,
   "Typ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_VALUE,
   "Wert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADDRESS,
   "Speicheradresse"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_BROWSE_MEMORY,
   "Durchsuche Adresse: %08X"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADDRESS_BIT_POSITION,
   "Speicheradressenmaske"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_ADDRESS_BIT_POSITION,
   "Adressen-Bitmaske bei Speichersuchgröße < 8-bit."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_REPEAT_COUNT,
   "Anzahl Iterationen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_REPEAT_COUNT,
   "Die Häufigkeit, mit der der Cheat angewandt wird. Verwende diese Option mit den beiden anderen Iterationsoptionen, um große Speicherbereiche zu beeinflussen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_REPEAT_ADD_TO_ADDRESS,
   "Adresserhöhung jede Iteration"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_REPEAT_ADD_TO_ADDRESS,
   "Nach jeder Iteration wird die 'Speicheradresse' um diese Zahl mal der 'Speichersuchgröße' erhöht."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_REPEAT_ADD_TO_VALUE,
   "Werterhöhung jede Iteration"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_REPEAT_ADD_TO_VALUE,
   "Nach jeder Iteration wird der 'Wert' um diesen Betrag erhöht."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_TYPE,
   "Vibrieren, wenn der Speicherwert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_VALUE,
   "Vergleichswert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_PORT,
   "Vibrations-Port"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_PRIMARY_STRENGTH,
   "Intensität des primären Vibrators"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_PRIMARY_DURATION,
   "Primäre Vibrationsdauer (ms)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_SECONDARY_STRENGTH,
   "Intensität des sekundären Vibrators"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_SECONDARY_DURATION,
   "Sekundäre Vibrationsdauer (ms)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADD_NEW_AFTER,
   "Füge nach diesem einen neuen Cheat hinzu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADD_NEW_BEFORE,
   "Füge vor diesem einen neuen Cheat hinzu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_COPY_AFTER,
   "Diesen Cheat danach kopieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_COPY_BEFORE,
   "Diesen Cheat davor kopieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DELETE,
   "Diesen Cheat entfernen"
   )

/* Quick Menu > Disc Control */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISK_TRAY_EJECT,
   "Disc auswerfen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISK_TRAY_EJECT,
   "Öffnet virtuelles Disc-Fach und entfernt aktuell geladene Disc. Wenn 'Inhalte anhalten, wenn das Menü aktiv ist' aktiviert ist, registrieren einige Cores möglicherweise keine Änderungen, es sei denn, der Inhalt wird nach jeder Disc-Steueraktion einige Sekunden lang fortgesetzt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISK_TRAY_INSERT,
   "Disc einlegen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISK_TRAY_INSERT,
   "Fügt eine Disc ein, die dem 'Aktueller Disc-Index' entspricht, und schließt das virtuelle Datenträgerfach. Wenn 'Inhalte anhalten, wenn das Menü aktiv ist' aktiviert ist, registrieren einige Cores möglicherweise keine Änderungen, es sei denn, der Inhalt wird nach jeder Disc-Steueraktion einige Sekunden lang fortgesetzt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISK_IMAGE_APPEND,
   "Neue Disc laden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISK_IMAGE_APPEND,
   "Wirf die aktuelle Disc aus, wähle eine neue Disc vom Dateisystem aus, lege sie ein und schließe das virtuelle Disc-Fach. HINWEIS: Dies ist eine Legacy-Funktion. Es wird stattdessen empfohlen, Multi-Disc-Titel über M3U-Wiedergabelisten zu laden, die die Disc-Auswahl mit den Optionen 'Disc auswerfen/einlegen' und 'Aktueller Disc-Index' ermöglichen."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISK_IMAGE_APPEND_TRAY_OPEN,
   "Wähle eine neue Disc vom Dateisystem aus und lege sie ein, ohne das virtuelle Disc-Fach zu schließen. HINWEIS: Dies ist eine Legacy-Funktion. Es wird stattdessen empfohlen, Multi-Disc-Titel über M3U-Wiedergabelisten zu laden, die die Disc-Auswahl mit der Option 'Aktueller Disc-Index ' ermöglichen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISK_INDEX,
   "Aktueller Disc-Index"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISK_INDEX,
   "Wähle die aktuelle Disc aus der Liste der verfügbaren Abbilder. Die Disc wird geladen, wenn 'Disc einlegen' ausgewählt wird."
   )

/* Quick Menu > Shaders */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADERS_ENABLE,
   "Video-Shader"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_WATCH_FOR_CHANGES,
   "Shader-Dateien auf Änderungen beobachten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SHADER_WATCH_FOR_CHANGES,
   "Änderungen an Shader-Dateien auf der Festplatte automatisch übernehmen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_REMEMBER_LAST_DIR,
   "Das zuletzt verwendete Shader-Verzeichnis merken"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_REMEMBER_LAST_DIR,
   "Dateibrowser beim Laden von Shader-Voreinstellungen im zuletzt verwendeten Verzeichnis öffnen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET,
   "Shader-Voreinstellung laden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET,
   "Lade eine Shader-Voreinstellung. Die Shader-Pipeline wird automatisch konfiguriert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE,
   "Speichern"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE,
   "Die aktuelle Shader-Voreinstellung speichern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_REMOVE,
   "Entfernen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_APPLY_CHANGES,
   "Änderungen übernehmen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SHADER_APPLY_CHANGES,
   "Änderungen an der Shader-Konfiguration werden sofort übernommen. Verwende diese Option, wenn Du die Anzahl der Shader-Durchläufe, die Filter, die FBO-Skalierung usw. geändert hast."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PARAMETERS,
   "Vorschau der Shader-Parameter"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PARAMETERS,
   "Modifiziert den aktuellen Shader direkt. Änderungen werden nicht in den Shader-Voreinstellungen gespeichert."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_NUM_PASSES,
   "Shader-Durchläufe"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_NUM_PASSES,
   "Erhöhe oder verringere die Anzahl der Shader-Pipeline-Durchgänge. Separate Shader können an jeden Pipeline-Durchgang gebunden werden und dessen Skalierung und Filterung konfigurieren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCALE,
   "Skalierung"
   )

/* Quick Menu > Shaders > Save */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE_REFERENCE,
   "Einfache Voreinstellungen"
   )
   
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE_REFERENCE,
   "Speichert eine Shader-Voreinstellung, die nur die von Dir vorgenommenen Parameteränderungen und einen Link zur ursprünglichen Voreinstellung enthält."
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE_AS,
   "Shader-Voreinstellung speichern unter"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE_AS,
   "Die aktuellen Shader-Einstellungen als neue Shader-Voreinstellung speichern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE_GLOBAL,
   "Globale Voreinstellung speichern"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE_GLOBAL,
   "Die aktuellen Shader-Einstellungen als globale Standardeinstellung speichern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE_CORE,
   "Core-Voreinstellung speichern"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE_CORE,
   "Die aktuellen Shader-Einstellungen als Standard für diesen Core speichern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE_PARENT,
   "Voreinstellung des Inhaltsverzeichnisses speichern"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE_PARENT,
   "Die aktuellen Shader-Einstellungen als Standard für alle Dateien im aktuellen Verzeichnis speichern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE_GAME,
   "Spiel-Voreinstellung speichern"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE_GAME,
   "Die aktuellen Shader-Einstellungen als Standard-Einstellung für diesen Inhalt speichern."
   )

/* Quick Menu > Shaders > Remove */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_PRESETS_FOUND,
   "Keine automatischen Shader-Voreinstellungen gefunden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_REMOVE_GLOBAL,
   "Globale Voreinstellung entfernen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_REMOVE_GLOBAL,
   "Die globale Voreinstellung, die von allen Inhalten und Cores verwendet wird, entfernen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_REMOVE_CORE,
   "Core-Voreinstellung entfernen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_REMOVE_CORE,
   "Die Core-Voreinstellung, die von allen Inhalten verwendet wird, die mit dem aktuell geladenen Core ausgeführt werden, entfernen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_REMOVE_PARENT,
   "Inhaltsverzeichnis-Voreinstellung entfernen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_REMOVE_PARENT,
   "Die Inhaltsverzeichnis-Voreinstellung, die von allen Inhalten im aktuellen Arbeitsverzeichnis verwendet wird, entfernen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_REMOVE_GAME,
   "Spielvoreinstellung entfernen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_REMOVE_GAME,
   "Entfernt die Spielvoreinstellung, die nur für das betreffende Spiel verwendet wird."
   )

/* Quick Menu > Shaders > Shader Parameters */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_SHADER_PARAMETERS,
   "Keine Shader-Parameter"
   )

/* Quick Menu > Overrides */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_CURRENT_CONFIG_OVERRIDE_CORE,
   "Speichere Core-Überschreibungen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_CURRENT_CONFIG_OVERRIDE_CORE,
   "Speichere eine überschreibende Konfiguration, die für jeden Inhalt, der mit diesem Core geladen wird, verwendet wird. Wird gegenüber der normalen Konfiguration bevorzugt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_CURRENT_CONFIG_OVERRIDE_CONTENT_DIR,
   "Überschreibende Konfiguration fürs Inhaltsverzeichnis speichern"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_CURRENT_CONFIG_OVERRIDE_CONTENT_DIR,
   "Eine überschreibende Konfigurationsdatei speichern, die für alle Inhalte gilt, die aus demselben Verzeichnis wie die aktuelle Datei geladen wurden. Hat Vorrang vor der Hauptkonfiguration."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_CURRENT_CONFIG_OVERRIDE_GAME,
   "Speichere Spiel-Überschreibungen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_CURRENT_CONFIG_OVERRIDE_GAME,
   "Speichere eine überschreibende Konfiguration, die nur für den aktuellen Inhalt verwendet wird. Wird gegenüber der normalen Konfiguration bevorzugt."
   )

/* Quick Menu > Achievements */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_ACHIEVEMENTS_TO_DISPLAY,
   "Keine Erfolge anzuzeigen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_PAUSE_MENU,
   "ToggleCheevosHardcore" /* not-displayed - needed to resolve submenu */
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_PAUSE,
   "Errungenschaften pausieren (Hardcore Mode)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_RESUME,
   "Errungenschaften fortsetzen (Hardcore Mode)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOT_LOGGED_IN,
   "Nicht eingeloggt"
)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CANNOT_ACTIVATE_ACHIEVEMENTS_WITH_THIS_CORE,
   "Erfolge können mit diesem Core nicht aktiviert werden"
)

/* Quick Menu > Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_DETAIL,
   "Datenbankeintrag"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RDB_ENTRY_DETAIL,
   "Datenbankinformationen für aktuellen Inhalt anzeigen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_ENTRIES_TO_DISPLAY,
   "Keine Einträge."
   )

/* Miscellaneous UI Items */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_CORES_AVAILABLE,
   "Kein Core verfügbar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_CORE_OPTIONS_AVAILABLE,
   "Keine Core-Optionen verfügbar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_CORE_INFORMATION_AVAILABLE,
   "Keine Core-Informationen verfügbar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_CORE_BACKUPS_AVAILABLE,
   "Keine Core-Backups verfügbar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_FAVORITES_AVAILABLE,
   "Keine Favoriten verfügbar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_HISTORY_AVAILABLE,
   "Kein Verlauf verfügbar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_IMAGES_AVAILABLE,
   "Keine Bilder verfügbar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_MUSIC_AVAILABLE,
   "Keine Musik verfügbar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_VIDEOS_AVAILABLE,
   "Keine Videos verfügbar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_INFORMATION_AVAILABLE,
   "Keine Informationen verfügbar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_PLAYLIST_ENTRIES_AVAILABLE,
   "Keine Playlist-Einträge verfügbar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_SETTINGS_FOUND,
   "Keine Einstellungen gefunden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_BT_DEVICES_FOUND,
   "Keine Bluetooth-Geräte gefunden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_NETWORKS_FOUND,
   "Kein Netzwerk gefunden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_CORE,
   "Kein Core"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SEARCH,
   "Suchen:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_BACK,
   "Zurück"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PARENT_DIRECTORY,
   "Übergeordnetes Verzeichnis"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_NOT_FOUND,
   "Verzeichnis nicht gefunden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_ITEMS,
   "Keine Einträge."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SELECT_FILE,
   "Wähle Datei"
   )

/* Settings Options */

MSG_HASH( /* FIXME Should be MENU_LABEL_VALUE */
   MSG_UNKNOWN_COMPILER,
   "Unbekannter Compiler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_DIGITAL_OR,
   "Teilen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_DIGITAL_VOTE,
   "Abstimmen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_ANALOG,
   "Freigabe analoger Eingaben"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_ANALOG_MAX,
   "Maximum"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_ANALOG_AVERAGE,
   "Mitteln"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_NONE,
   "Keine"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_NO_PREFERENCE,
   "Keine Präferenz"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_TICKER_TYPE_BOUNCE,
   "Links/Rechts abprallen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_TICKER_TYPE_LOOP,
   "Nach links scrollen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_IMAGE_MODE,
   "Bildmodus"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_SPEECH_MODE,
   "Sprachmodus"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_ENTRY_REMOVE_ENABLE_HIST_FAV,
   "Verlauf & Favoriten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_ENTRY_REMOVE_ENABLE_ALL,
   "Alle Wiedergabelisten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_ENTRY_REMOVE_ENABLE_NONE,
   "AUS"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_INLINE_CORE_DISPLAY_HIST_FAV,
   "Verlauf & Favoriten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_INLINE_CORE_DISPLAY_ALWAYS,
   "Immer"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_INLINE_CORE_DISPLAY_NEVER,
   "Nie"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_RUNTIME_PER_CORE,
   "Pro Core"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_RUNTIME_AGGREGATE,
   "Gesamtsumme"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE_CHARGED,
   "Geladen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE_CHARGING,
   "Lädt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE_DISCHARGING,
   "Entlädt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE_NO_SOURCE,
   "Keine Quelle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USE_THIS_DIRECTORY,
   "<Dieses Verzeichnis verwenden>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_CONTENT,
   "<Inhaltsverzeichnis>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_DEFAULT,
   "<Standard>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_NONE,
   "<Keins>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RETROPAD_WITH_ANALOG,
   "RetroPad mit Analog"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NONE,
   "Kein"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UNKNOWN,
   "Unbekannt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HOLD_START,
   "Start halten (2 Sekunden)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HOLD_SELECT,
   "Select halten (2 Sekunden)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWN_SELECT,
   "Unten + Select"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_DISABLED,
   "<Deaktiviert>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_CHANGES,
   "Sich ändert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_DOES_NOT_CHANGE,
   "Sich nicht ändert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_INCREASE,
   "Sich erhöht"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_DECREASE,
   "Sich verringert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_EQ_VALUE,
   "= Vergleichswert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_NEQ_VALUE,
   "!= Vergleichswert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_LT_VALUE,
   "< Vergleichswert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_GT_VALUE,
   "> Vergleichswert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_INCREASE_BY_VALUE,
   "Sich um Vergleichswert erhöht"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_DECREASE_BY_VALUE,
   "Sich um Vergleichswert verringert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_PORT_16,
   "Alle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_DISABLED,
   "<Deaktiviert>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_SET_TO_VALUE,
   "Fester Wert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_INCREASE_VALUE,
   "Um Wert erhöhen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_DECREASE_VALUE,
   "Um Wert verringern"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_RUN_NEXT_IF_EQ,
   "Nächsten Cheat ausführen wenn Wert = Speicherwert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_RUN_NEXT_IF_NEQ,
   "Nächsten Cheat ausführen wenn Wert != Speicherwert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_RUN_NEXT_IF_LT,
   "Nächsten Cheat ausführen wenn Wert < Speicherwert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_RUN_NEXT_IF_GT,
   "Nächsten Cheat ausführen wenn Wert > Speicherwert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_1,
   "1-Bit, maximaler Wert = 0x01"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_2,
   "2-Bit, maximaler Wert = 0x03"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_4,
   "4-Bit, maximaler Wert = 0x0F"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_8,
   "8-Bit, maximaler Wert = 0xFF"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_16,
   "16-Bit, maximaler Wert = 0xFFFF"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_32,
   "32-Bit, maximaler Wert = 0xFFFFFFFF"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_SORT_MODE_DEFAULT,
   "Systemstandard"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_SORT_MODE_ALPHABETICAL,
   "Alphabetisch"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_SORT_MODE_OFF,
   "Keins"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_DEFAULT,
   "Vollständige Bezeichnungen anzeigen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_REMOVE_PARENS,
   "()-Informationen entfernen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_REMOVE_BRACKETS,
   "[]-Informationen entfernen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_REMOVE_PARENS_AND_BRACKETS,
   "() und [] entfernen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_KEEP_REGION,
   "Region behalten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_KEEP_DISC_INDEX,
   "Disc-Index behalten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_KEEP_REGION_AND_DISC_INDEX,
   "Region und Disc-Index behalten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_THUMBNAIL_MODE_DEFAULT,
   "Systemstandard"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAIL_MODE_SCREENSHOTS,
   "Bildschirmfoto"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAIL_MODE_TITLE_SCREENS,
   "Titelbildschirm"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCROLL_FAST,
   "Schnell"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ON,
   "EIN"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OFF,
   "AUS"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_YES,
   "Ja"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO,
   "Nein"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TRUE,
   "An"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FALSE,
   "Aus"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ENABLED,
   "Aktiviert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISABLED,
   "Deaktiviert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOT_AVAILABLE,
   "Nicht verfügbar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_LOCKED_ENTRY,
   "Gesperrt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_UNLOCKED_ENTRY,
   "Freigeschaltet"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_UNOFFICIAL_ENTRY,
   "Inoffiziell"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_UNSUPPORTED_ENTRY,
   "Nicht unterstützt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_TRACKERS_ONLY,
   "Nur Tracker"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_NOTIFICATIONS_ONLY,
   "Nur Benachrichtigungen"
)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DONT_CARE,
   "Egal"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NEAREST,
   "Nächster"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SYSTEM_NAME_USE_CONTENT_DIR,
   "<Inhaltsverzeichnis>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SYSTEM_NAME_USE_CUSTOM,
   "<Benutzerdefiniert>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_CORE_NAME_DETECT,
   "<Nicht spezifiziert>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_ANALOG,
   "Linker Analogstick"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RIGHT_ANALOG,
   "Rechter Analogstick"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_KEY,
   "(Taste: %s)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_LEFT,
   "Maus 1"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_RIGHT,
   "Maus 2"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_MIDDLE,
   "Maus 3"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_BUTTON4,
   "Maus 4"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_BUTTON5,
   "Maus 5"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_WHEEL_UP,
   "Mausrad hoch"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_WHEEL_DOWN,
   "Mausrad runter"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_HORIZ_WHEEL_UP,
   "Mausrad links"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_HORIZ_WHEEL_DOWN,
   "Mausrad rechts"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_POLL_TYPE_BEHAVIOR_EARLY,
   "Früh"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_POLL_TYPE_BEHAVIOR_LATE,
   "Spät"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_YMD_HMS,
   "JJJJ-MM-TT HH:MM:SS"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_YMD_HM,
   "JJJJ-MM-TT HH:MM"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_YMD,
   "JJJJ-MM-TT"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_YM,
   "JJJJ-MM"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MDYYYY_HMS,
   "MM-TT-JJJJ HH:MM:SS"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MDYYYY_HM,
   "MM-TT-JJJJ HH:MM"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MD_HM,
   "MM-TT HH:MM"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MDYYYY,
   "MM-TT-JJJJ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MD,
   "MM-TT"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMMYYYY_HMS,
   "TT-MM-JJJJ HH:MM:SS"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMMYYYY_HM,
   "TT-MM-JJJJ HH:MM"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMM_HM,
   "TT-MM HH:MM"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMMYYYY,
   "TT-MM-JJJJ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMM,
   "TT-MM"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_YMD_HMS_AMPM,
   "JJJJ-MM-TT HH:MM:SS (AM/PM)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_YMD_HM_AMPM,
   "JJJJ-MM-TT HH:MM (AM/PM)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MDYYYY_HMS_AMPM,
   "MM-TT-JJJJ HH:MM:SS (AM/PM)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MDYYYY_HM_AMPM,
   "MM-TT-JJJJ HH:MM (AM/PM)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_MD_HM_AMPM,
   "MM-TT HH:MM (AM/PM)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMMYYYY_HMS_AMPM,
   "TT-MM-JJJJ HH:MM:SS (AM/PM)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMMYYYY_HM_AMPM,
   "TT-MM-JJJJ HH:MM (AM/PM)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DDMM_HM_AMPM,
   "TT-MM HH:MM (AP/PM)"
   )

/* RGUI: Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_BACKGROUND_FILLER_THICKNESS_ENABLE,
   "Hintergrundfüllerdicke aktivieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_BACKGROUND_FILLER_THICKNESS_ENABLE,
   "Grobheit des Schachbrettmusters im Menühintergrund erhöhen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_BORDER_FILLER_ENABLE,
   "Rahmenfüller aktivieren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_BORDER_FILLER_THICKNESS_ENABLE,
   "Rahmenfüllerdicke aktivieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_BORDER_FILLER_THICKNESS_ENABLE,
   "Grobheit des Menürahmen-Schachbretts erhöhen."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_BORDER_FILLER_ENABLE,
   "Menürahmen anzeigen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_FULL_WIDTH_LAYOUT,
   "Layout in voller Breite verwenden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_FULL_WIDTH_LAYOUT,
   "Die Größe und Position der Menüeinträge ändern, um den verfügbaren Bildschirmbereich optimal zu nutzen. Deaktiviere diese Option, um das klassische zweispaltige Layout mit fester Breite zu verwenden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_LINEAR_FILTER,
   "Linearer Filter für Menü"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_LINEAR_FILTER,
   "Fügt dem Menü eine leichte Unschärfe hinzu, um harte Pixelkanten zu glätten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_INTERNAL_UPSCALE_LEVEL,
   "Internes Upscaling"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_INTERNAL_UPSCALE_LEVEL,
   "Menüoberfläche vor dem Zeichnen auf dem Bildschirm upscalen. Bei Verwendung mit aktiviertem Menü-Linearfilter werden Skalierungsartefakte (ungleichmäßige Pixel) entfernt, während ein scharfes Bild erhalten bleibt. Hat einen erheblichen Einfluss auf die Leistung, der mit dem Upscaling-Level zunimmt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_ASPECT_RATIO,
   "Menü-Seitenverhältnis"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_ASPECT_RATIO,
   "Menü-Seitenverhältnis wählen. Breitbildverhältnisse erhöhen die horizontale Auflösung der Menüoberfläche. (Möglicherweise ist ein Neustart erforderlich, wenn 'Menü-Seitenverhältnis sperren' deaktiviert ist.)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_ASPECT_RATIO_LOCK,
   "Menü-Seitenverhältnis sperren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_ASPECT_RATIO_LOCK,
   "Stellt sicher, dass das Menü immer mit dem richtigen Seitenverhältnis angezeigt wird. Wenn deaktiviert, wird das Spielmenü auf den aktuell geladenen Inhalt gestreckt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME,
   "Menü-Farbschema"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RGUI_MENU_COLOR_THEME,
   "Ein anderes Farbthema wählen. Wenn 'Benutzerdefiniert' ausgewählt wird, können voreingestellte Dateien für Menüthemen verwendet werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_THEME_PRESET,
   "Benutzerdefinierte Menü-Themenvoreinstellung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RGUI_MENU_THEME_PRESET,
   "Im Dateibrowser ein voreingestelltes Menüthema auswählen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_SHADOWS,
   "Schatteneffekte"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_SHADOWS,
   "Schlagschatten für Menütext, Rahmen und Miniaturansichten aktivieren. Hat eine mäßige Auswirkung auf die Leistung."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_PARTICLE_EFFECT,
   "Hintergrundanimation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_PARTICLE_EFFECT,
   "Hintergrundpartikelanimation aktivieren. Hat erhebliche Auswirkungen auf die Leistung."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_PARTICLE_EFFECT_SPEED,
   "Hintergrundanimationsgeschwindigkeit"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_PARTICLE_EFFECT_SPEED,
   "Geschwindigkeit der Hintergrundpartikelanimation anpassen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_INLINE_THUMBNAILS,
   "Wiedergabelisten-Miniaturansichten anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_INLINE_THUMBNAILS,
   "Die Anzeige von verkleinerten Inline-Miniaturansichten beim Betrachten von Wiedergabelisten aktivieren. Wenn diese Option deaktiviert ist, kann 'Obere Miniaturansicht' durch Drücken von RetroPad Y weiterhin im Vollbild angezeigt werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAILS_RGUI,
   "Obere Miniaturansicht"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_THUMBNAILS_RGUI,
   "Art der Miniaturansicht, die oben rechts in den Wiedergabelisten angezeigt werden soll. Diese Miniaturansicht kann durch Drücken von RetroPad Y im Vollbild angezeigt werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_THUMBNAILS_RGUI,
   "Untere Miniaturansicht"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LEFT_THUMBNAILS_RGUI,
   "Art der Miniaturansicht, die unten rechts in den Wiedergabelisten angezeigt werden soll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_SWAP_THUMBNAILS,
   "Thumbnails tauschen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_SWAP_THUMBNAILS,
   "Vertauscht die Anzeigepositionen von 'Obere Miniaturansicht' und 'Untere Miniaturansicht'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_THUMBNAIL_DOWNSCALER,
   "Miniaturansichten-Downscaling-Methode"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_THUMBNAIL_DOWNSCALER,
   "Resampling-Methode zum Verkleinern großer Miniaturansichten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_THUMBNAIL_DELAY,
   "Vorschauverzögerung (ms)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_THUMBNAIL_DELAY,
   "Verzögert das Laden der zugehörigen Miniaturansichten bei der Auswahl eines Wiedergabelisteneintrags. Ein Wert von mindestens 256 ms ermöglicht schnelles und verzögerungsfreies Scrollen auch auf den langsamsten Geräten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_EXTENDED_ASCII,
   "Erweiterte ASCII-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_EXTENDED_ASCII,
   "Die Anzeige von nicht standardmäßigen ASCII-Zeichen ermöglichen. Erforderlich für Kompatibilität mit bestimmten nicht englischen westlichen Sprachen. Hat einen moderaten Einfluss auf die Leistung."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_SWITCH_ICONS,
   "Schalter-Symbole anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_SWITCH_ICONS,
   "Symbole anstelle von EIN/AUS-Text verwenden, um 'Umschalt'-Menüeinstellungen darzustellen."
   )

/* RGUI: Settings Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_THUMB_SCALE_POINT,
   "Nächste-Nachbarn (schnell)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_THUMB_SCALE_SINC,
   "Sinc/Lanczos3 (langsam)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_UPSCALE_NONE,
   "Kein"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_16_9_CENTRE,
   "16:9 (zentriert)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_16_10_CENTRE,
   "16:10 (zentriert)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_3_2_CENTRE,
   "3:2 (zentriert)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_LOCK_NONE,
   "AUS"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_LOCK_FIT_SCREEN,
   "An Bildschirmgröße anpassen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_LOCK_INTEGER,
   "Pixelgenaue Bildskalierung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_LOCK_FILL_SCREEN,
   "An Bildschirmgröße anpassen (gestreckt)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CUSTOM,
   "Benutzerdefiniert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_RED,
   "Klassisch Rot"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_ORANGE,
   "Klassisch Orange"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_YELLOW,
   "Klassisch Gelb"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_GREEN,
   "Klassisch Grün"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_BLUE,
   "Klassisch Blau"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_VIOLET,
   "Klassisches Violett"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_GREY,
   "Klassisch Grau"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_LEGACY_RED,
   "Legacy Rot"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_DARK_PURPLE,
   "Dunkelviolett"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_MIDNIGHT_BLUE,
   "Mitternachtsblau"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_GOLDEN,
   "Gold"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_ELECTRIC_BLUE,
   "Elektrisches Blau"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_APPLE_GREEN,
   "Apfelgrün"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_VOLCANIC_RED,
   "Vulkanrot"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_LAGOON,
   "Lagune"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_FAIRYFLOSS,
   "Zuckerwatte"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_GRUVBOX_DARK,
   "Gruvbox dunkel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_GRUVBOX_LIGHT,
   "Gruvbox hell"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_HACKING_THE_KERNEL,
   "Den Kernel hacken"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_SOLARIZED_DARK,
   "Solarized dunkel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_SOLARIZED_LIGHT,
   "Solarized hell"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_TANGO_DARK,
   "Tango dunkel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_TANGO_LIGHT,
   "Tango hell"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_PARTICLE_EFFECT_NONE,
   "AUS"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_PARTICLE_EFFECT_SNOW,
   "Schnee (leicht)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_PARTICLE_EFFECT_SNOW_ALT,
   "Schnee (schwer)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_PARTICLE_EFFECT_RAIN,
   "Regen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_PARTICLE_EFFECT_STARFIELD,
   "Sternenfeld"
   )

/* XMB: Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_THUMBNAILS,
   "Miniaturansicht links"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LEFT_THUMBNAILS,
   "Art der Miniaturansicht, die auf der linken Seite gezeigt werden soll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DYNAMIC_WALLPAPER,
   "Dynamisches Hintergrundbild"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DYNAMIC_WALLPAPER,
   "Lade ein neues Hintergrundbild dynamisch, abhängig vom Inhalt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_HORIZONTAL_ANIMATION,
   "Horizontale Animation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_HORIZONTAL_ANIMATION,
   "Horizontale Animation für das Menü aktivieren. Verursacht Leistungseinbuße."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_ANIMATION_HORIZONTAL_HIGHLIGHT,
   "Animation der horizontalen Icon-Auswahl"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_XMB_ANIMATION_HORIZONTAL_HIGHLIGHT,
   "Die Animation, die beim Scrollen zwischen Tabs ausgelöst wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_ANIMATION_MOVE_UP_DOWN,
   "Animation beim Auf-/Abbewegen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_XMB_ANIMATION_MOVE_UP_DOWN,
   "Die Animation, die beim Auf- oder Abbewegen ausgelöst wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_ANIMATION_OPENING_MAIN_MENU,
   "Animation des Öffnens/Schließens des Hauptmenüs"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_XMB_ANIMATION_OPENING_MAIN_MENU,
   "Die Animation, die beim Öffnen eines Untermenüs ausgelöst wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ALPHA_FACTOR,
   "Menü-Transparenz"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_FONT,
   "Menü-Schriftart"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_FONT,
   "Wähle eine andere Schriftart, die im Menü verwendet werden soll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_FONT_COLOR_RED,
   "Menü Schriftfarbe (rot)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_FONT_COLOR_GREEN,
   "Menü Schriftfarbe (grün)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_FONT_COLOR_BLUE,
   "Menü Schriftfarbe (blau)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_LAYOUT,
   "Menü-Layout"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_LAYOUT,
   "Ein anderes Layout für die XMB-Schnittstelle wählen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_THEME,
   "Menü-Design"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_THEME,
   "Wähle ein anderes Thema für das Menü aus. Änderungen werden übernommen, nachdem Du das Programm neu gestartet hast."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_SHADOWS_ENABLE,
   "Icon-Schatten aktivieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_SHADOWS_ENABLE,
   "Schlagschatten für alle Symbole zeichnen. Verursacht kleine Leistungseinbuße."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_RIBBON_ENABLE,
   "Menü-Shader"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_RIBBON_ENABLE,
   "Wähle einen animierten Effekt für das Hintergrundbild. Kann je nach Effekt GPU-lastig sein. Wenn die Leistung nicht ausreicht, wähle einen einfacheren Effekt oder deaktiviere diese Option."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME,
   "Menü-Farbschema"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_MENU_COLOR_THEME,
   "Wähle einen anderen Farbverlauf für das Hintergrundbild."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_VERTICAL_THUMBNAILS,
   "Vertikale Anordnung der Miniaturansichten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_VERTICAL_THUMBNAILS,
   "Das linke Miniaturbild unter dem rechten auf der rechten Seite des Bildschirms anzeigen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_THUMBNAIL_SCALE_FACTOR,
   "Miniaturansichten-Skalierungsfaktor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_XMB_THUMBNAIL_SCALE_FACTOR,
   "Größe der Miniaturansicht reduzieren, indem die maximal zulässige Breite skaliert wird."
   )
MSG_HASH( /* FIXME Unused? */
   MENU_ENUM_LABEL_VALUE_XMB_MAIN_MENU_ENABLE_SETTINGS,
   "Aktiviere den Reiter 'Einstellungen'"
   )
MSG_HASH( /* FIXME Unused? */
   MENU_ENUM_SUBLABEL_XMB_MAIN_MENU_ENABLE_SETTINGS,
   "Aktiviert den Einstellungen-Tab. (Neustart erforderlich)"
   )

/* XMB: Settings Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_RIBBON,
   "Band"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_RIBBON_SIMPLIFIED,
   "Bänder (vereinfacht)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_SIMPLE_SNOW,
   "Schnee (vereinfacht)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_SNOW,
   "Schnee"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_SNOWFLAKE,
   "Schneeflocken"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_CUSTOM,
   "Benutzerdefiniert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_MONOCHROME,
   "Einfarbig"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_MONOCHROME_INVERTED,
   "Einfarbig invertiert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_SYSTEMATIC,
   "Systematisch"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_AUTOMATIC,
   "Automatisch"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_AUTOMATIC_INVERTED,
   "Automatisch invertiert"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_APPLE_GREEN,
   "Apfelgrün"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_DARK,
   "Dunkel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_LIGHT,
   "Hell"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_MORNING_BLUE,
   "Morgenblau"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_SUNBEAM,
   "Sonnenstrahl"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_DARK_PURPLE,
   "Dunkelviolett"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_ELECTRIC_BLUE,
   "Elektrisches Blau"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_LEGACY_RED,
   "Legacy Rot"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_MIDNIGHT_BLUE,
   "Mitternachtsblau"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_PLAIN,
   "Einfach"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_VOLCANIC_RED,
   "Vulkanrot"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_LIME,
   "Limettengrün"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_PIKACHU_YELLOW,
   "Pikachu Gelb"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_FLAMING_HOT,
   "Flammend heiß"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_ICE_COLD,
   "Eiskalt"
   )

/* Ozone: Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLLAPSE_SIDEBAR,
   "Seitenleiste einklappen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_COLLAPSE_SIDEBAR,
   "Die linke Seitenleiste immer einklappen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_TRUNCATE_PLAYLIST_NAME,
   "Wiedergabelistennamen abschneiden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_TRUNCATE_PLAYLIST_NAME,
   "Entfernt die Anbieternamen aus den Wiedergabelisten. Zum Beispiel wird \"Sony - PlayStation\" zu \"PlayStation\". (Neustart erforderlich)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_SORT_AFTER_TRUNCATE_PLAYLIST_NAME,
   "Wiedergabelisten nach dem Abschneiden des Namens sortieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_SORT_AFTER_TRUNCATE_PLAYLIST_NAME,
   "Wiedergabelisten werden in alphabetischer Reihenfolge neu sortiert, nachdem die Herstellerkomponente ihrer Namen entfernt wurde. (Neustart erforderlich)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_MENU_COLOR_THEME,
   "Menü-Farbschema"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_MENU_COLOR_THEME,
   "Ein anderes Farbthema wählen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_BASIC_WHITE,
   "Basic Weiß"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_BASIC_BLACK,
   "Basic Schwarz"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_GRUVBOX_DARK,
   "Gruvbox dunkel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_BOYSENBERRY,
   "Boysenbeere"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_HACKING_THE_KERNEL,
   "Den Kernel hacken"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_THUMBNAILS_OZONE,
   "Zweite Miniaturansicht"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LEFT_THUMBNAILS_OZONE,
   "Das Inhaltsmetadatenfenster durch eine zusätzliche Miniaturansicht ersetzen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_SCROLL_CONTENT_METADATA,
   "Lauftext für Inhaltsmetadaten verwenden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_SCROLL_CONTENT_METADATA,
   "Wenn aktiviert, belegen alle Inhaltsmetadaten in der rechten Seitenleiste der Wiedergabelisten (zugeordneter Core, Spielzeit) eine einzelne Zeile. Text, der die Breite der Seitenleiste überschreitet, wird als Lauftext angezeigt. Wenn deaktiviert, werden alle Inhaltsmetadaten statisch angezeigt und so umbrochen, dass sie so viele Zeilen wie erforderlich belegen."
   )

/* MaterialUI: Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_ICONS_ENABLE,
   "Menü-Icons"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_ICONS_ENABLE,
   "Symbole links neben den Menüeinträgen anzeigen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_PLAYLIST_ICONS_ENABLE,
   "Wiedergabelistensymbole"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_PLAYLIST_ICONS_ENABLE,
   "Systemspezifische Symbole auf dem Wiedergabelisten-Tab anzeigen. (Neustart erforderlich)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_LANDSCAPE_LAYOUT_OPTIMIZATION,
   "Quer-Layout optimieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_LANDSCAPE_LAYOUT_OPTIMIZATION,
   "Das Menülayout automatisch an den Bildschirm anpassen, wenn die Querformatanzeige verwendet wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_SHOW_NAV_BAR,
   "Navigationsleiste anzeigen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_SHOW_NAV_BAR,
   "Permanent Menünavigationsverknüpfungen anzeigen. Ermöglicht das schnelle Umschalten zwischen Menükategorien. Empfohlen für Touchscreen-Geräte."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_AUTO_ROTATE_NAV_BAR,
   "Navigationsleiste automatisch drehen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_AUTO_ROTATE_NAV_BAR,
   "Die Navigationsleiste automatisch auf die rechte Seite des Bildschirms bewegen, wenn die Querformatanzeige verwendet wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME,
   "Menü-Farbschema"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_MENU_COLOR_THEME,
   "Wähle einen anderen Farbverlauf für das Hintergrundbild."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_TRANSITION_ANIMATION,
   "Menü-Übergangsanimation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_MENU_TRANSITION_ANIMATION,
   "Animationseffekte beim Navigieren zwischen verschiedenen Ebenen des Menüs aktivieren."
   )

/* MaterialUI: Settings Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_BLUE,
   "Blau"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_BLUE_GREY,
   "Blau/Grau"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_DARK_BLUE,
   "Dunkelblau"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_GREEN,
   "Grün"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_RED,
   "Rot"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_YELLOW,
   "Gelb"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_MATERIALUI_DARK,
   "Material UI dunkel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_OZONE_DARK,
   "Ozon dunkel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_GRUVBOX_DARK,
   "Gruvbox dunkel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_SOLARIZED_DARK,
   "Solarized dunkel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_CUTIE_BLUE,
   "Cutie Blau"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_CUTIE_GREEN,
   "Cutie Grün"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_CUTIE_PURPLE,
   "Cutie Violett"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_CUTIE_RED,
   "Cutie Rot"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_HACKING_THE_KERNEL,
   "Den Kernel hacken"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_TRANSITION_ANIM_FADE,
   "Ausblenden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_TRANSITION_ANIM_SLIDE,
   "Gleiten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_TRANSITION_ANIM_NONE,
   "AUS"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_PORTRAIT_DISABLED,
   "AUS"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_PORTRAIT_LIST_SMALL,
   "Liste (klein)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_PORTRAIT_LIST_MEDIUM,
   "Liste (mittel)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_PORTRAIT_DUAL_ICON,
   "Doppel-Symbol"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_DISABLED,
   "AUS"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_LIST_SMALL,
   "Liste (klein)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_LIST_MEDIUM,
   "Liste (mittel)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_LIST_LARGE,
   "Liste (groß)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_LANDSCAPE_LAYOUT_OPTIMIZATION_DISABLED,
   "AUS"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_LANDSCAPE_LAYOUT_OPTIMIZATION_ALWAYS,
   "EIN"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_LANDSCAPE_LAYOUT_OPTIMIZATION_EXCLUDE_THUMBNAIL_VIEWS,
   "Miniaturansichten ausschließen"
   )

/* Qt (Desktop Menu) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_FILE_LOAD_CORE,
   "&Core laden..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_CLOSED_DOCKS,
   "Geschlossene Docks"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_SHADER_PARAMS,
   "Vorschau der Shader-Parameter"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_SAVE_DOCK_POSITIONS,
   "Dockpositionen merken:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_SAVE_GEOMETRY,
   "Fenstergeometrie merken:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_SAVE_LAST_TAB,
   "Letzten Inhaltsbrowser-Tab merken:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_THEME,
   "Thema:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_THEME_SYSTEM_DEFAULT,
   "<Systemstandard>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_THEME_DARK,
   "Dunkel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_THEME_CUSTOM,
   "Benutzerdefiniert..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_TITLE,
   "Einstellungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_HELP,
   "&Hilfe"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_HELP_ABOUT,
   "Über RetroArch"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_HELP_DOCUMENTATION,
   "Dokumentation"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_LOAD_CUSTOM_CORE,
   "Benutzerdefinierten Core laden..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_LOAD_CORE,
   "Core laden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_LOADING_CORE,
   "Lade Core..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_TAB_PLAYLISTS,
   "Wiedergabelisten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_TAB_FILE_BROWSER,
   "Dateibrowser"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_TAB_FILE_BROWSER_TOP,
   "Anfang"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_TAB_FILE_BROWSER_UP,
   "Hoch"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_DOCK_CONTENT_BROWSER,
   "Inhaltsbrowser"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_THUMBNAIL_SCREENSHOT,
   "Bildschirmfotos"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_THUMBNAIL_TITLE_SCREEN,
   "Titelbildschirm"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ALL_PLAYLISTS,
   "Alle Wiedergabelisten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CORE,
   "Cores"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CORE_INFO,
   "Core-Informationen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CORE_SELECTION_ASK,
   "<Frag mich>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_INFORMATION,
   "Informationen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_WARNING,
   "Warnung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ERROR,
   "Fehler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_NETWORK_ERROR,
   "Netzwerkfehler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RESTART_TO_TAKE_EFFECT,
   "Bitte starte das Programm neu, um die Änderungen anzuwenden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ITEMS_COUNT,
   "%1 Einträge"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DROP_IMAGE_HERE,
   "Bild hier ablegen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DONT_SHOW_AGAIN,
   "Nicht wieder anzeigen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_STOP,
   "Stopp"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ASSOCIATE_CORE,
   "Core zuordnen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_HIDDEN_PLAYLISTS,
   "Versteckte Wiedergabelisten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_HIDE,
   "Ausblenden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_HIGHLIGHT_COLOR,
   "Hervorhebungsfarbe:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SELECT_COLOR,
   "Farbe wählen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SELECT_THEME,
   "Thema auswählen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CUSTOM_THEME,
   "Benutzerdefiniertes Design"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FILE_PATH_IS_BLANK,
   "Dateipfad ist leer."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FILE_IS_EMPTY,
   "Datei ist leer."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FILE_READ_OPEN_FAILED,
   "Datei konnte nicht zum Lesen geöffnet werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FILE_WRITE_OPEN_FAILED,
   "Datei konnte nicht zum Schreiben geöffnet werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FILE_DOES_NOT_EXIST,
   "Datei existiert nicht."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_SUGGEST_LOADED_CORE_FIRST,
   "Geladenen Kern zuerst vorschlagen:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_VIEW,
   "Ansicht"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_VIEW_TYPE_ICONS,
   "Symbole"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_VIEW_TYPE_LIST,
   "Liste"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_SEARCH_CLEAR,
   "Leeren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PROGRESS,
   "Fortschritt:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_ALL_PLAYLISTS_LIST_MAX_COUNT,
   "Maximale Anzahl Listeneinträge in \"Alle Wiedergabelisten\":"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_ALL_PLAYLISTS_GRID_MAX_COUNT,
   "Maximale Anzahl Rastereinträge \"Alle Wiedergabelisten\":"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_SHOW_HIDDEN_FILES,
   "Versteckte Dateien und Ordner anzeigen:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_NEW_PLAYLIST,
   "Neue Wiedergabeliste"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ENTER_NEW_PLAYLIST_NAME,
   "Bitte Namen für neue Wiedergabeliste eingeben:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DELETE_PLAYLIST,
   "Wiedergabeliste löschen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RENAME_PLAYLIST,
   "Wiedergabeliste umbenennen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CONFIRM_DELETE_PLAYLIST,
   "Möchtest Du Wiedergabeliste \"%1\" wirklich löschen?"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_QUESTION,
   "Frage"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_COULD_NOT_DELETE_FILE,
   "Datei konnte nicht gelöscht werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_COULD_NOT_RENAME_FILE,
   "Datei konnte nicht umbenannt werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_GATHERING_LIST_OF_FILES,
   "Liste von Dateien wird gesammelt..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ADDING_FILES_TO_PLAYLIST,
   "Dateien werden zur Wiedergabeliste hinzugefügt..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY,
   "Wiedergabelisteneintrag"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_PATH,
   "Pfad:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_CORE,
   "Cores:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_DATABASE,
   "Inhaltsdatenbank:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_EXTENSIONS,
   "Erweiterungen:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_EXTENSIONS_PLACEHOLDER,
   "(durch Leerzeichen getrennt; schließt standardmäßig alle ein)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_FILTER_INSIDE_ARCHIVES,
   "Archiv-Inhalte filtern"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FOR_THUMBNAILS,
   "(verwendet, um Miniaturansichten zu finden)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CONFIRM_DELETE_PLAYLIST_ITEM,
   "Möchtest Du Artikel \"%1\" wirklich löschen?"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CANNOT_ADD_TO_ALL_PLAYLISTS,
   "Bitte wähle zuerst eine einzelne Wiedergabeliste."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DELETE,
   "Löschen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ADD_ENTRY,
   "Eintrag Hinzufügen..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ADD_FILES,
   "Datei(en) hinzufügen..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ADD_FOLDER,
   "Ordner hinzufügen..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_EDIT,
   "Bearbeiten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SELECT_FILES,
   "Dateien auswählen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SELECT_FOLDER,
   "Ordner auswählen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLEASE_FILL_OUT_REQUIRED_FIELDS,
   "Bitte alle erforderlichen Felder ausfüllen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_UPDATE_RETROARCH_NIGHTLY,
   "RetroArch aktualisieren (Nightly)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_UPDATE_RETROARCH_FINISHED,
   "RetroArch erfolgreich aktualisiert. Bitte starte die Anwendung neu, damit die Änderungen wirksam werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_UPDATE_RETROARCH_FAILED,
   "Aktualisierung fehlgeschlagen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_HELP_ABOUT_CONTRIBUTORS,
   "Mitwirkende"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CURRENT_SHADER,
   "Aktueller Shader"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MOVE_DOWN,
   "Nach unten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MOVE_UP,
   "Nach oben"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_LOAD,
   "Laden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SAVE,
   "Speichern"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_REMOVE,
   "Entfernen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_REMOVE_PASSES,
   "Durchläufe entfernen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_APPLY,
   "Übernehmen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SHADER_ADD_PASS,
   "Durchlauf hinzufügen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SHADER_CLEAR_ALL_PASSES,
   "Alle Durchläufe entfernen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SHADER_NO_PASSES,
   "Keine Shader-Durchläufe."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RESET_PASS,
   "Durchlauf zurücksetzen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RESET_ALL_PASSES,
   "Alle Durchläufe zurücksetzen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RESET_PARAMETER,
   "Parameter zurücksetzen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DOWNLOAD_ALREADY_IN_PROGRESS,
   "Ein Download läuft bereits."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_THUMBNAIL_TYPE,
   "Miniaturansicht"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DOWNLOAD_ALL_THUMBNAILS,
   "Alle Miniaturansichten herunterladen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DOWNLOAD_ALL_THUMBNAILS_ENTIRE_SYSTEM,
   "Gesamtes System"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DOWNLOAD_ALL_THUMBNAILS_THIS_PLAYLIST,
   "Diese Wiedergabeliste"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_THUMBNAIL_PACK_DOWNLOADED_SUCCESSFULLY,
   "Miniaturansichten erfolgreich heruntergeladen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DOWNLOAD_PLAYLIST_THUMBNAIL_PROGRESS,
   "Erfolgreich: %1 Fehlgeschlagen: %2"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CORE_OPTIONS,
   "Core-Einstellungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RESET,
   "Zurücksetzen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RESET_ALL,
   "Alle zurücksetzen"
   )

/* Unsorted */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_SETTINGS,
   "Aktualisierungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_CHEEVOS_SETTINGS,
   "Errungenschaften-Konten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_LIST_END,
   "Endpunkt der Benutzerkonten-Liste"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_SETTINGS,
   "Retro-Errungenschaften"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_COUNTERS,
   "Core-Zähler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_DISK,
   "Keine Disc ausgewählt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRONTEND_COUNTERS,
   "Frontend-Zähler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HORIZONTAL_MENU,
   "Horizontales Menü"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DESCRIPTOR_HIDE_UNBOUND,
   "Verstecke nicht zugewiesene Eingabe-Beschriftungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DESCRIPTOR_LABEL_SHOW,
   "Zeige Eingabe-Bezeichnungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_SETTINGS,
   "Overlays"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_CONTENT_HISTORY,
   "Inhalt aus Verlauf laden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOAD_CONTENT_HISTORY,
   "Inhalte aus der Verlaufsliste auswählen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SUBSYSTEM_SETTINGS,
   "Subsysteme"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_NETPLAY_HOSTS_FOUND,
   "Keine Netplay-Hosts gefunden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_PERFORMANCE_COUNTERS,
   "Keine Leistungszähler."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_PLAYLISTS,
   "Keine Wiedergabelisten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BT_CONNECTED,
   "Verbunden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SETTINGS,
   "Cheat-Einstellungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_SETTINGS,
   "Cheatsuche starten oder fortsetzen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN_MUSIC,
   "Abspielen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SECONDS,
   "Sekunden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_START_CORE,
   "Core starten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_START_CORE,
   "Core ohne Inhalt starten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SUPPORTED_CORES,
   "Vorgeschlagene Cores"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UNABLE_TO_READ_COMPRESSED_FILE,
   "Komprimiertes Archiv kann nicht gelesen werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USER,
   "Benutzer"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_KEYBOARD,
   "Tastatur"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USE_BUILTIN_IMAGE_VIEWER,
   "Integrierten Bildbetrachter verwenden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MAX_SWAPCHAIN_IMAGES,
   "Maximale Anzahl von Zwischenbildern"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MAX_SWAPCHAIN_IMAGES,
   "Zwingt den Videotreiber dazu, einen bestimmten Framebuffer zu verwenden."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_PARAMETERS,
   "Modifiziert die Shader-Voreinstellung, die momentan im Menü benutzt wird."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VIDEO_SHADER_PRESET_TWO,
   "Shader-Voreinstellungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BROWSE_URL_LIST,
   "Besuche URL"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BROWSE_URL,
   "URL-Pfad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ROOM_NICKNAME,
   "Spitzname: %s"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_COMPAT_CONTENT_FOUND,
   "Kompatibler Inhalt gefunden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_START_GONG,
   "Gong starten"
   )

/* Unused (Only Exist in Translation Files) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ASPECT_RATIO_AUTO,
   "Automatisches Bildseitenverhältnis"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_BGM_ENABLE,
   "Aktiviere System-BGM"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CUSTOM_RATIO,
   "Benutzerdefiniertes Verhältnis"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_ENABLE,
   "Aktiviere Aufnahmefunktion"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_PATH,
   "Speichere Aufnahme als..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_USE_OUTPUT_DIRECTORY,
   "Speichere Aufnahme im Ausgabeverzeichnis"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_MATCH_IDX,
   "Betrachte Treffer #"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_MATCH_IDX,
   "Treffer auswählen, der angezeigt werden soll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FORCE_ASPECT,
   "Seitenverhältnis erzwingen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SELECT_FROM_PLAYLIST,
   "Wähle aus Playlist"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESUME,
   "Fortsetzen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESUME,
   "Setze die aktuelle Anwendung wieder fort und verlasse das Spielmenü."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_VIEW_MATCHES,
   "Liste von %u Treffern ansehen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_CREATE_OPTION,
   "Erstelle Code zu diesem Treffer"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DELETE_OPTION,
   "Diesen Treffer löschen"
   )
MSG_HASH( /* FIXME Still exists in a comment about being removed */
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_FOOTER_OPACITY,
   "Transparenz der Fußzeile"
   )
MSG_HASH( /* FIXME Still exists in a comment about being removed */
   MENU_ENUM_SUBLABEL_MATERIALUI_MENU_FOOTER_OPACITY,
   "Ändere die Transparenz der Footer-Grafik."
   )
MSG_HASH( /* FIXME Still exists in a comment about being removed */
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_HEADER_OPACITY,
   "Transparenz der Kopfzeile"
   )
MSG_HASH( /* FIXME Still exists in a comment about being removed */
   MENU_ENUM_SUBLABEL_MATERIALUI_MENU_HEADER_OPACITY,
   "Ändere die Transparenz der Header-Grafik."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ENABLE,
   "Aktiviere Netplay"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_START_CONTENT,
   "Starte Inhalt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_HISTORY_PATH,
   "Pfad zur Verlaufsliste"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCH_RESOLUTION_OUTPUT_DISPLAY_ID,
   "Ausgangs Bildschirm ID"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_RESOLUTION_OUTPUT_DISPLAY_ID,
   "Wähle den Ausgangsport aus, welcher mit dem CRT Bildschirm verbunden ist."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP,
   "Hilfe"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_AUDIO_VIDEO_TROUBLESHOOTING,
   "Audio/Video-Fehlerbehebung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_CHANGE_VIRTUAL_GAMEPAD,
   "Virtueller Controller Overlay ändern"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_LOADING_CONTENT,
   "Inhalt laden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_SCANNING_CONTENT,
   "Nach Inhalten suchen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_WHAT_IS_A_CORE,
   "Was ist ein Core?"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_SEND_DEBUG_INFO,
   "Debug-Info senden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_HELP_SEND_DEBUG_INFO,
   "Sendet Diagnoseinformationen über das Gerät und die RetroArch-Konfiguration zur Analyse an unsere Server."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANAGEMENT,
   "Datenbanken"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_DELAY_FRAMES,
   "Netplay-Verzögerung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_LAN_SCAN_SETTINGS,
   "Lokales Netzwerk durchsuchen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_LAN_SCAN_SETTINGS,
   "Suche und verbinde mit Netplay-Hosts in deinem lokalen Netzwerk."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_MODE,
   "Netplay-Client aktivieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SPECTATOR_MODE_ENABLE,
   "Beobachtermodus aktivieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_DESCRIPTION,
   "Beschreibung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAME_THROTTLE_ENABLE,
   "Begrenze maximale Ausführgeschwindigkeit"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_START_SEARCH,
   "Suche nach neuem Cheat-Code starten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_START_SEARCH,
   "Nach einem neuen Cheat suchen. Die Anzahl der Bits kann geändert werden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_CONTINUE_SEARCH,
   "Suche fortsetzen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_CONTINUE_SEARCH,
   "Suche weiter nach einem neuen Cheat."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_LIST_HARDCORE,
   "Errungenschaften (Hardcore)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_DETAILS,
   "Cheat-Details"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_CHEAT_DETAILS,
   "Verwaltet die Einstellungen für Cheat-Details."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_SEARCH,
   "Cheatsuche starten oder fortsetzen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_CHEAT_SEARCH,
   "Starte oder setze eine Cheat-Code-Suche fort."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_NUM_PASSES,
   "Cheat-Durchläufe"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_NUM_PASSES,
   "Erhöhe oder verringere die Anzahl der Cheats."
   )

/* Unused (Needs Confirmation) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_X,
   "Linker Analogstick X"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_Y,
   "Linker Analogstick Y"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_X,
   "Rechter Analogstick X"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_Y,
   "Rechter Analogstick Y"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_SETTINGS,
   "Cheatsuche starten oder fortsetzen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST,
   "Datenbank-Suchanfragen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_DEVELOPER,
   "Datenbank - Filter : Entwickler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_PUBLISHER,
   "Datenbank - Filter : Publisher"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_ORIGIN,
   "Datenbank - Filter : Herkunft"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_FRANCHISE,
   "Datenbank - Filter : Franchise"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_ESRB_RATING,
   "Datenbank - Filter : ESRB-Bewertung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_ELSPA_RATING,
   "Datenbank - Filter : ELSPA-Bewertung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_PEGI_RATING,
   "Datenbank - Filter : PEGI-Bewertung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_CERO_RATING,
   "Datenbank - Filter : CERO-Bewertung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_BBFC_RATING,
   "Datenbank - Filter : BBFC-Bewertung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_MAX_USERS,
   "Datenbank - Filter : Max. Spieler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_RELEASEDATE_BY_MONTH,
   "Datenbank - Filter : Veröffentlichungsdatum nach Monat"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_RELEASEDATE_BY_YEAR,
   "Datenbank - Filter : Veröffentlichungsdatum nach Jahr"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_EDGE_MAGAZINE_ISSUE,
   "Datenbank - Filter : Edge Magazine-Ausgabe"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_EDGE_MAGAZINE_RATING,
   "Datenbank - Filter : Edge Magazine-Bewertung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_DATABASE_INFO,
   "Datenbank-Informationen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONFIG,
   "Konfiguration"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SETTINGS,
   "Netplay-Einstellungen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_SLANG_SUPPORT,
   "Slang-Unterstützung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FBO_SUPPORT,
   "Unterstützung für OpenGL/Direct3D Render-to-Texture (Multi-Pass Shader)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_DIR,
   "Inhalt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_DIR,
   "Wird normalerweise von Entwickler verwendet, die libretro/RetroArch-Apps paketieren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ASK_ARCHIVE,
   "Nachfragen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS,
   "Grundlegende Menüsteuerung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_CONFIRM,
   "Bestätigen/OK"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_QUIT,
   "Beenden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_SCROLL_UP,
   "Nach oben scrollen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_START,
   "Standardwerte"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_TOGGLE_KEYBOARD,
   "Tastatur ein-/ausschalten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_TOGGLE_MENU,
   "Menü ein-/ausschalten"
   )

/* Discord Status */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_IN_MENU,
   "Im Menu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_IN_GAME,
   "Im Spiel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_IN_GAME_PAUSED,
   "Im Spiel (Pausiert)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_STATUS_PLAYING,
   "Wiedergebend"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_STATUS_PAUSED,
   "Pausiert"
   )

/* Notifications */

MSG_HASH( /* FIXME Should be MSG_ */
   MENU_ENUM_LABEL_VALUE_NETPLAY_START_WHEN_LOADED,
   "Netplay wird gestartet, sobald ein Inhalt geladen wurde."
   )
MSG_HASH( /* FIXME Should be MSG_ */
   MENU_ENUM_LABEL_VALUE_NETPLAY_LOAD_CONTENT_MANUALLY,
   "Konnte keinen geeigneten Core oder Inhalt finden, lade manuell."
   )
MSG_HASH( /* FIXME Should be MSG_ */
   MENU_ENUM_LABEL_VALUE_VIDEO_DRIVER_FALLBACK,
   "Der System-Grafiktreiber ist nicht mit dem aktuellen Grafiktreiber in RetroArch kompatibel. Greife auf den %s Treiber zurück. Bitte starte RetroArch neu, damit die Änderungen wirksam werden."
   )
MSG_HASH( /* FIXME Should be MSG_ */
   MENU_ENUM_LABEL_VALUE_SIDELOAD_CORE_SUCCESS,
   "Core Installation erfolgreich"
   )
MSG_HASH( /* FIXME Should be MSG_ */
   MENU_ENUM_LABEL_VALUE_SIDELOAD_CORE_ERROR,
   "Core Installation fehlgeschlagen"
   )
MSG_HASH(
   MSG_CHEAT_DELETE_ALL_INSTRUCTIONS,
   "Drücke fünf Mal rechts, um alle Cheats zu löschen."
   )
MSG_HASH(
   MSG_FAILED_TO_SAVE_DEBUG_INFO,
   "Fehler beim Speichern der Debug-Informationen."
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_DEBUG_INFO,
   "Fehler beim Senden der Debug-Informationen an den Server."
   )
MSG_HASH(
   MSG_SENDING_DEBUG_INFO,
   "Debug-Informationen werden gesendet..."
   )
MSG_HASH(
   MSG_SENT_DEBUG_INFO,
   "Debug-Informationen erfolgreich an den Server gesendet. Ihre ID-Nummer ist %u."
   )
MSG_HASH(
   MSG_PRESS_TWO_MORE_TIMES_TO_SEND_DEBUG_INFO,
   "Drücke noch zweimal, um Diagnoseinformationen an das RetroArch-Team zu senden."
   )
MSG_HASH(
   MSG_PRESS_ONE_MORE_TIME_TO_SEND_DEBUG_INFO,
   "Drücken Sie noch einmal, um Diagnoseinformationen an das RetroArch-Team zu senden."
   )
MSG_HASH(
   MSG_AUDIO_MIXER_VOLUME,
   "Globale Lautstärke des Audio-Mixers"
   )
MSG_HASH(
   MSG_NETPLAY_LAN_SCAN_COMPLETE,
   "Netplay-Suche abgeschlossen."
   )
MSG_HASH(
   MSG_SORRY_UNIMPLEMENTED_CORES_DONT_DEMAND_CONTENT_NETPLAY,
   "Entschuldigung, nicht implementiert: Cores, die keinen Inhalt verlangen, können nicht an Netplay teilnehmen."
   )
MSG_HASH(
   MSG_NATIVE,
   "Nativ"
   )
MSG_HASH(
   MSG_DEVICE_DISCONNECTED_FROM_PORT,
   "Gerät von Anschluss getrennt"
   )
MSG_HASH(
   MSG_UNKNOWN_NETPLAY_COMMAND_RECEIVED,
   "Unbekannter Netplay-Befehl wurde empfangen"
   )
MSG_HASH(
   MSG_FILE_ALREADY_EXISTS_SAVING_TO_BACKUP_BUFFER,
   "Datei existiert bereits. Speichere im Backup-Puffer"
   )
MSG_HASH(
   MSG_GOT_CONNECTION_FROM,
   "Verbindung hergestellt mit: \"%s\""
   )
MSG_HASH(
   MSG_GOT_CONNECTION_FROM_NAME,
   "Verbindung hergestellt mit: \"%s (%s)\""
   )
MSG_HASH(
   MSG_PUBLIC_ADDRESS,
   "Öffentliche Addresse"
   )
MSG_HASH(
   MSG_UPNP_FAILED,
   "Portzuordnung fehlgeschlagen"
   )
MSG_HASH(
   MSG_NO_ARGUMENTS_SUPPLIED_AND_NO_MENU_BUILTIN,
   "Keine Argumente angegeben und kein Menü integriert - zeige Hilfe an..."
   )
MSG_HASH(
   MSG_SETTING_DISK_IN_TRAY,
   "Lege Datenträger in Laufwerksschublade ein"
   )
MSG_HASH(
   MSG_WAITING_FOR_CLIENT,
   "Warte auf Client ..."
   )
MSG_HASH(
   MSG_NETPLAY_YOU_HAVE_LEFT_THE_GAME,
   "Du hast das Spiel verlassen"
   )
MSG_HASH(
   MSG_NETPLAY_YOU_HAVE_JOINED_AS_PLAYER_N,
   "Du bist als Spieler %u beigetreten"
   )
MSG_HASH(
   MSG_NETPLAY_YOU_HAVE_JOINED_WITH_INPUT_DEVICES_S,
   "Du bist mit Eigabegeräten %.*s beigetreten"
   )
MSG_HASH(
   MSG_NETPLAY_PLAYER_S_LEFT,
   "Spieler %.*s hat das Spiel verlassen"
   )
MSG_HASH(
   MSG_NETPLAY_S_HAS_JOINED_AS_PLAYER_N,
   "%.*s ist als Spieler %u beigetreten"
   )
MSG_HASH(
   MSG_NETPLAY_S_HAS_JOINED_WITH_INPUT_DEVICES_S,
   "%.*s ist mit Eingabegeräten %.*s beigetreten"
   )
MSG_HASH(
   MSG_NETPLAY_NOT_RETROARCH,
   "Ein Netplay-Verbindungsversuch ist fehlgeschlagen, da beim Teilnehmer RetroArch nicht oder in einer älteren Version augeführt wird."
   )
MSG_HASH(
   MSG_NETPLAY_OUT_OF_DATE,
   "Der Netplay-Teilnehmer nutzt eine alte Version von RetroArch. Kann nicht verbinden."
   )
MSG_HASH(
   MSG_NETPLAY_DIFFERENT_VERSIONS,
   "WARNUNG: Ein Netplay-Teilnehmer nutzt eine andere Version von RetroArch. Falls Probleme auftreten, benutzt dieselbe Version."
   )
MSG_HASH(
   MSG_NETPLAY_DIFFERENT_CORES,
   "Ein Netplay-Teilnehmer nutzt einen anderen Core. Kann nicht verbinden."
   )
MSG_HASH(
   MSG_NETPLAY_DIFFERENT_CORE_VERSIONS,
   "WARNUNG: Ein Netplay-Teilnehmer nutzt eine andere Version vom Core. Falls Probleme auftreten, benutzt dieselbe Version."
   )
MSG_HASH(
   MSG_NETPLAY_ENDIAN_DEPENDENT,
   "Dieser Core unterstützt kein Netplay zwischen diesen Systemen"
   )
MSG_HASH(
   MSG_NETPLAY_PLATFORM_DEPENDENT,
   "Dieser Core unterstützt kein Netplay zwischen verschiedenen Systemen"
   )
MSG_HASH(
   MSG_NETPLAY_ENTER_PASSWORD,
   "Gib das Server-Passwort ein:"
   )
MSG_HASH(
   MSG_DISCORD_CONNECTION_REQUEST,
   "Möchtest Du eine Verbindung zulassen von:"
   )
MSG_HASH(
   MSG_NETPLAY_INCORRECT_PASSWORD,
   "Falsches Passwort"
   )
MSG_HASH(
   MSG_NETPLAY_SERVER_NAMED_HANGUP,
   "\"%s\" hat die Verbindung getrennt"
   )
MSG_HASH(
   MSG_NETPLAY_SERVER_HANGUP,
   "Die Verbindung mit einem Netplay-Client wurde getrennt"
   )
MSG_HASH(
   MSG_NETPLAY_CLIENT_HANGUP,
   "Verbindung mit Netplay getrennt"
   )
MSG_HASH(
   MSG_NETPLAY_CANNOT_PLAY_UNPRIVILEGED,
   "Du hast nicht die Berechtigung, an diesem Spiel teilzunehmen"
   )
MSG_HASH(
   MSG_NETPLAY_CANNOT_PLAY_NO_SLOTS,
   "Es gibt keine freien Spieler-Plätze mehr"
   )
MSG_HASH(
   MSG_NETPLAY_CANNOT_PLAY_NOT_AVAILABLE,
   "Die angeforderten Eingabegeräte sind nicht verfügbar"
   )
MSG_HASH(
   MSG_NETPLAY_CANNOT_PLAY,
   "Konnte nicht zum Spieler-Modus wechseln"
   )
MSG_HASH(
   MSG_NETPLAY_PEER_PAUSED,
   "Netplay-Teilnehmer \"%s\" hat pausiert"
   )
MSG_HASH(
   MSG_NETPLAY_CHANGED_NICK,
   "Dein Spitzname wurde geändert zu \"%s\""
   )
MSG_HASH(
   MSG_AUDIO_VOLUME,
   "Audio-Lautstärke"
   )
MSG_HASH(
   MSG_AUTODETECT,
   "Automatisch erkennen"
   )
MSG_HASH(
   MSG_AUTOLOADING_SAVESTATE_FROM,
   "Automatisches Laden des Speicherzustands aus"
   )
MSG_HASH(
   MSG_CAPABILITIES,
   "Fähigkeiten"
   )
MSG_HASH(
   MSG_CONNECTING_TO_NETPLAY_HOST,
   "Verbinde zu Netplay-Host"
   )
MSG_HASH(
   MSG_CONNECTING_TO_PORT,
   "Verbinde zu Port"
   )
MSG_HASH(
   MSG_CONNECTION_SLOT,
   "Verbindungs-Slot"
   )
MSG_HASH(
   MSG_FETCHING_CORE_LIST,
   "Core-Liste wird abgerufen..."
   )
MSG_HASH(
   MSG_CORE_LIST_FAILED,
   "Fehler beim Abrufen der Core-Liste!"
   )
MSG_HASH(
   MSG_LATEST_CORE_INSTALLED,
   "Neueste Version bereits installiert: "
   )
MSG_HASH(
   MSG_UPDATING_CORE,
   "Aktualisiere Core: "
   )
MSG_HASH(
   MSG_DOWNLOADING_CORE,
   "Lade Core herunter: "
   )
MSG_HASH(
   MSG_EXTRACTING_CORE,
   "Entpacke Core: "
   )
MSG_HASH(
   MSG_CORE_INSTALLED,
   "Core installiert: "
   )
MSG_HASH(
   MSG_CORE_INSTALL_FAILED,
   "Fehler beim Installieren des Cores: "
   )
MSG_HASH(
   MSG_SCANNING_CORES,
   "Scanne Cores..."
   )
MSG_HASH(
   MSG_CHECKING_CORE,
   "Überprüfe Core: "
   )
MSG_HASH(
   MSG_ALL_CORES_UPDATED,
   "Alle installierten Cores sind aktuell"
   )
MSG_HASH(
   MSG_ALL_CORES_SWITCHED_PFD,
   "Alle unterstützten Cores wurden auf Play Store Versionen umgestellt"
   )
MSG_HASH(
   MSG_NUM_CORES_UPDATED,
   "Cores aktualisiert: "
   )
MSG_HASH(
   MSG_NUM_CORES_LOCKED,
   "Cores übersprungen: "
   )
MSG_HASH(
   MSG_CORE_UPDATE_DISABLED,
   "Core Update deaktiviert - Core gesperrt: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_RESETTING_CORES,
   "Setze Cores zurück: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_CORES_RESET,
   "Cores zurückgesetzt: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_CLEANING_PLAYLIST,
   "Reinige Wiedergabeliste: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_PLAYLIST_CLEANED,
   "Wiedergabeliste bereinigt: "
   )
MSG_HASH(
   MSG_ADDED_TO_FAVORITES,
   "Zu Favoriten hinzugefügt"
   )
MSG_HASH(
   MSG_ADD_TO_FAVORITES_FAILED,
   "Fehler beim Hinzufügen des Favoriten: Wiedergabeliste voll"
   )
MSG_HASH(
   MSG_SET_CORE_ASSOCIATION,
   "Core zugeordnet: "
   )
MSG_HASH(
   MSG_RESET_CORE_ASSOCIATION,
   "Core-Zuordnung für den Wiedergabelisteneintrag wurde zurückgesetzt."
   )
MSG_HASH(
   MSG_APPENDED_DISK,
   "Datenträger hinzufügen"
   )
MSG_HASH(
   MSG_FAILED_TO_APPEND_DISK,
   "Fehler beim Anhängen der Disc"
   )
MSG_HASH(
   MSG_APPLICATION_DIR,
   "Anwendungen"
   )
MSG_HASH(
   MSG_APPLYING_CHEAT,
   "Änderungen übernehmen."
   )
MSG_HASH(
   MSG_APPLYING_SHADER,
   "Shader anwenden"
   )
MSG_HASH(
   MSG_AUDIO_MUTED,
   "Audio stummgeschaltet."
   )
MSG_HASH(
   MSG_AUDIO_UNMUTED,
   "Audio laut."
   )
MSG_HASH(
   MSG_AUTOCONFIG_FILE_ERROR_SAVING,
   "Speichern der Autokonfigurations-Datei fehlgeschlagen."
   )
MSG_HASH(
   MSG_AUTOCONFIG_FILE_SAVED_SUCCESSFULLY,
   "Autokonfigurations-Datei erfolgreich gespeichert."
   )
MSG_HASH(
   MSG_AUTOSAVE_FAILED,
   "Initialisierung der Autospeichern-Funktion fehlgeschlagen."
   )
MSG_HASH(
   MSG_AUTO_SAVE_STATE_TO,
   "Zustand automatisch speichern in"
   )
MSG_HASH(
   MSG_BLOCKING_SRAM_OVERWRITE,
   "Überschreiben des SRAM blockieren"
   )
MSG_HASH(
   MSG_BRINGING_UP_COMMAND_INTERFACE_ON_PORT,
   "Starte Befehlsinterface auf Port"
   )
MSG_HASH(
   MSG_BYTES,
   "Bytes"
   )
MSG_HASH(
   MSG_CANNOT_INFER_NEW_CONFIG_PATH,
   "Kann neuen Konfigurationspfad nicht ableiten. Verwende aktuelle Zeit."
   )
MSG_HASH(
   MSG_CHEEVOS_HARDCORE_MODE_ENABLE,
   "Hardcore-Modus aktiviert. Speicherabbilder & Rückspul-Funktion ausgeschaltet."
   )
MSG_HASH(
   MSG_COMPARING_WITH_KNOWN_MAGIC_NUMBERS,
   "Vergleiche mit bekannten Magic Numbers..."
   )
MSG_HASH(
   MSG_COMPILED_AGAINST_API,
   "Kompiliert gegen API"
   )
MSG_HASH(
   MSG_CONFIG_DIRECTORY_NOT_SET,
   "Konfigurations-Verzeichnis nicht definiert. Kann neue Konfiguration nicht speichern."
   )
MSG_HASH(
   MSG_CONNECTED_TO,
   "Verbunden mit"
   )
MSG_HASH(
   MSG_CONTENT_CRC32S_DIFFER,
   "CRC32-Prüfsummen des Inhalts weichen ab. Andere Spiele können nicht verwendet werden."
   )
MSG_HASH(
   MSG_CONTENT_LOADING_SKIPPED_IMPLEMENTATION_WILL_DO_IT,
   "Laden des Inhalts übersprungen. Die Implementierung wird ihn selbst laden."
   )
MSG_HASH(
   MSG_CORE_DOES_NOT_SUPPORT_SAVESTATES,
   "Core unterstützt keine Speicherabbilder."
   )
MSG_HASH(
   MSG_CORE_OPTIONS_FILE_CREATED_SUCCESSFULLY,
   "Core-Optionsdatei wurde erfolgreich erstellt."
   )
MSG_HASH(
   MSG_COULD_NOT_FIND_ANY_NEXT_DRIVER,
   "Konnte keinen nächsten Treiber finden"
   )
MSG_HASH(
   MSG_COULD_NOT_FIND_COMPATIBLE_SYSTEM,
   "Konnte kein kompatibles System finden"
   )
MSG_HASH(
   MSG_COULD_NOT_FIND_VALID_DATA_TRACK,
   "Konnte keinen gültigen Daten-Track finden"
   )
MSG_HASH(
   MSG_COULD_NOT_OPEN_DATA_TRACK,
   "Konnte Daten-Track nicht öffnen"
   )
MSG_HASH(
   MSG_COULD_NOT_READ_CONTENT_FILE,
   "Konnte Inhalts-Datei nicht lesen"
   )
MSG_HASH(
   MSG_COULD_NOT_READ_MOVIE_HEADER,
   "Konnte Film-Header nicht lesen."
   )
MSG_HASH(
   MSG_COULD_NOT_READ_STATE_FROM_MOVIE,
   "Konnte Status der Filmdatei nicht lesen."
   )
MSG_HASH(
   MSG_CRC32_CHECKSUM_MISMATCH,
   "CRC32-Prüfsumme des Inhalts und die gespeicherte Prüfsumme der Replay-Datei stimmen nicht überein. Wird die Aufzeichnung wiedergegeben, wird sie sehr wahrscheinlich asynchron."
   )
MSG_HASH(
   MSG_CUSTOM_TIMING_GIVEN,
   "Benutzerdefiniertes Timing gefunden"
   )
MSG_HASH(
   MSG_DECOMPRESSION_ALREADY_IN_PROGRESS,
   "Dekompression läuft bereits."
   )
MSG_HASH(
   MSG_DECOMPRESSION_FAILED,
   "Dekompression fehlgeschlagen."
   )
MSG_HASH(
   MSG_DETECTED_VIEWPORT_OF,
   "Erkannte Bildbereich von"
   )
MSG_HASH(
   MSG_DID_NOT_FIND_A_VALID_CONTENT_PATCH,
   "Kein gültiger Patch für diesen Inhalt gefunden."
   )
MSG_HASH(
   MSG_DISCONNECT_DEVICE_FROM_A_VALID_PORT,
   "Gerät von einem gültigen Anschluss trennen."
   )
MSG_HASH(
   MSG_DOWNLOADING,
   "Herunterladen von"
   )
MSG_HASH(
   MSG_INDEX_FILE,
   "Index"
   )
MSG_HASH(
   MSG_DOWNLOAD_FAILED,
   "Herunterladen fehlgeschlagen"
   )
MSG_HASH(
   MSG_ERROR,
   "Fehler"
   )
MSG_HASH(
   MSG_ERROR_LIBRETRO_CORE_REQUIRES_CONTENT,
   "Libretro-Core benötigt Inhalt, es wurde jedoch keiner bereitgestellt."
   )
MSG_HASH(
   MSG_ERROR_LIBRETRO_CORE_REQUIRES_SPECIAL_CONTENT,
   "Libretro-Core benötigt speziellen Inhalt, es wurde jedoch keiner bereitgestellt."
   )
MSG_HASH(
   MSG_ERROR_LIBRETRO_CORE_REQUIRES_VFS,
   "Core unterstützt kein VFS und das Laden von einer lokalen Kopie ist fehlgeschlagen"
   )
MSG_HASH(
   MSG_ERROR_PARSING_ARGUMENTS,
   "Fehler beim Verarbeiten der Argumente."
   )
MSG_HASH(
   MSG_ERROR_SAVING_CORE_OPTIONS_FILE,
   "Fehler beim Speichern der Core-Optionen"
   )
MSG_HASH(
   MSG_ERROR_SAVING_REMAP_FILE,
   "Fehler beim Speichern der Remap-Datei."
   )
MSG_HASH(
   MSG_ERROR_REMOVING_REMAP_FILE,
   "Fehler beim Löschen der Remap-Datei."
   )
MSG_HASH(
   MSG_ERROR_SAVING_SHADER_PRESET,
   "Fehler beim Speichern der Shader-Voreinstellung."
   )
MSG_HASH(
   MSG_EXTERNAL_APPLICATION_DIR,
   "Externe Anwendungen"
   )
MSG_HASH(
   MSG_EXTRACTING,
   "Entpacke"
   )
MSG_HASH(
   MSG_EXTRACTING_FILE,
   "Entpacke Datei"
   )
MSG_HASH(
   MSG_FAILED_SAVING_CONFIG_TO,
   "Fehler beim Speichern der Konfiguration in"
   )
MSG_HASH(
   MSG_FAILED_TO,
   "Fehler beim"
   )
MSG_HASH(
   MSG_FAILED_TO_ACCEPT_INCOMING_SPECTATOR,
   "Ankommender Beobachter konnte nicht akzeptiert werden."
   )
MSG_HASH(
   MSG_FAILED_TO_ALLOCATE_MEMORY_FOR_PATCHED_CONTENT,
   "Fehler beim zuweisen des Arbeitsspeichers für den gepatchten Inhalt..."
   )
MSG_HASH(
   MSG_FAILED_TO_APPLY_SHADER,
   "Fehler beim Anwenden des Shaders."
   )
MSG_HASH(
   MSG_FAILED_TO_APPLY_SHADER_PRESET,
   "Shader-Voreinstellung konnte nicht angewendet werden:"
   )
MSG_HASH(
   MSG_FAILED_TO_BIND_SOCKET,
   "Fehler beim binden des Sockets."
   )
MSG_HASH(
   MSG_FAILED_TO_CREATE_THE_DIRECTORY,
   "Fehler beim Erstellen des Verzeichnisses."
   )
MSG_HASH(
   MSG_FAILED_TO_EXTRACT_CONTENT_FROM_COMPRESSED_FILE,
   "Fehler beim Entpacken des Inhalts aus dem Archiv"
   )
MSG_HASH(
   MSG_FAILED_TO_GET_NICKNAME_FROM_CLIENT,
   "Benutzername konnte vom Client nicht gelesen werden."
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD,
   "Laden fehlgeschlagen"
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD_CONTENT,
   "Laden des Inhalts fehlgeschlagen"
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD_MOVIE_FILE,
   "Laden der Filmdatei fehlgeschlagen"
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD_OVERLAY,
   "Laden des Overlays fehlgeschlagen."
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD_STATE,
   "Fehler beim Laden des Spielstands von"
   )
MSG_HASH(
   MSG_FAILED_TO_OPEN_LIBRETRO_CORE,
   "Öffnen des Libretro-Cores fehlgeschlagen"
   )
MSG_HASH(
   MSG_FAILED_TO_PATCH,
   "Patch fehlgeschlagen"
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_HEADER_FROM_CLIENT,
   "Header konnte nicht vom Client empfangen werden."
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_NICKNAME,
   "Empfangen des Nickname fehlgeschlagen."
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_NICKNAME_FROM_HOST,
   "Empfangen des Nickname vom Host fehlgeschlagen."
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_NICKNAME_SIZE_FROM_HOST,
   "Länge des Nickname wurde vom Host nicht empfangen."
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_SRAM_DATA_FROM_HOST,
   "SRAM-Daten wurden vom Host nicht empfangen."
   )
MSG_HASH(
   MSG_FAILED_TO_REMOVE_DISK_FROM_TRAY,
   "Auswerfen des Datenträgers fehlgeschlagen."
   )
MSG_HASH(
   MSG_FAILED_TO_REMOVE_TEMPORARY_FILE,
   "Fehler beim entfernen der temporären Datei"
   )
MSG_HASH(
   MSG_FAILED_TO_SAVE_SRAM,
   "Fehler beim Speichern des SRAM"
   )
MSG_HASH(
   MSG_FAILED_TO_SAVE_STATE_TO,
   "Fehler beim Speichern des Spielstands in"
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_NICKNAME,
   "Fehler beim Senden des Nickname."
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_NICKNAME_SIZE,
   "Fehler beim Senden der Nickname-Länge."
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_NICKNAME_TO_CLIENT,
   "Fehler beim Senden des Nickname zum Client."
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_NICKNAME_TO_HOST,
   "Fehler beim Senden des Nickname zum Host."
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_SRAM_DATA_TO_CLIENT,
   "Fehler beim Senden der SRAM-Daten zum Client."
   )
MSG_HASH(
   MSG_FAILED_TO_START_AUDIO_DRIVER,
   "Audiotreiber konnte nicht gestartet werden. Fahre ohne Audio fort."
   )
MSG_HASH(
   MSG_FAILED_TO_START_MOVIE_RECORD,
   "Konnte Film-Aufzeichnung nicht starten."
   )
MSG_HASH(
   MSG_FAILED_TO_START_RECORDING,
   "Konnte Aufzeichnung nicht starten."
   )
MSG_HASH(
   MSG_FAILED_TO_TAKE_SCREENSHOT,
   "Konnte Bildschirmfoto nicht erstellen."
   )
MSG_HASH(
   MSG_FAILED_TO_UNDO_LOAD_STATE,
   "Laden des Spielstands konnte nicht rückgängig gemacht werden."
   )
MSG_HASH(
   MSG_FAILED_TO_UNDO_SAVE_STATE,
   "Speichern des Spielstands konnte nicht rückgängig gemacht werden."
   )
MSG_HASH(
   MSG_FAILED_TO_UNMUTE_AUDIO,
   "Audio konnte nicht lautgeschaltet werden."
   )
MSG_HASH(
   MSG_FATAL_ERROR_RECEIVED_IN,
   "Fataler Fehler in"
   )
MSG_HASH(
   MSG_FILE_NOT_FOUND,
   "Datei nicht gefunden"
   )
MSG_HASH(
   MSG_FOUND_AUTO_SAVESTATE_IN,
   "Spielstand gefunden in"
   )
MSG_HASH(
   MSG_FOUND_DISK_LABEL,
   "Disc-Label gefunden"
   )
MSG_HASH(
   MSG_FOUND_FIRST_DATA_TRACK_ON_FILE,
   "Ersten Daten-Track in der Datei gefunden"
   )
MSG_HASH(
   MSG_FOUND_LAST_STATE_SLOT,
   "Letzten Speicherplatz gefunden"
   )
MSG_HASH(
   MSG_FOUND_SHADER,
   "Shader gefunden"
   )
MSG_HASH(
   MSG_FRAMES,
   "Bilder"
   )
MSG_HASH(
   MSG_GAME_SPECIFIC_CORE_OPTIONS_FOUND_AT,
   "Spieloptionen: Spielspezifische Core-Optionen gefunden in"
   )
MSG_HASH(
   MSG_GOT_INVALID_DISK_INDEX,
   "Ungültiger Disc-Index."
   )
MSG_HASH(
   MSG_GRAB_MOUSE_STATE,
   "Maus-Status"
   )
MSG_HASH(
   MSG_GAME_FOCUS_ON,
   "Spielfokus ein"
   )
MSG_HASH(
   MSG_GAME_FOCUS_OFF,
   "Spielfokus aus"
   )
MSG_HASH(
   MSG_HW_RENDERED_MUST_USE_POSTSHADED_RECORDING,
   "Der Libretro-Core ist Hardware-gerendert. GPU-Aufzeichnung muss ebenfalls aktiviert werden."
   )
MSG_HASH(
   MSG_INFLATED_CHECKSUM_DID_NOT_MATCH_CRC32,
   "Prüfsumme entspricht nicht CRC32."
   )
MSG_HASH(
   MSG_INPUT_CHEAT,
   "Cheat eingeben"
   )
MSG_HASH(
   MSG_INPUT_CHEAT_FILENAME,
   "Cheat-Dateiname"
   )
MSG_HASH(
   MSG_INPUT_PRESET_FILENAME,
   "Vorlagen-Dateiname"
   )
MSG_HASH(
   MSG_INPUT_RENAME_ENTRY,
   "Titel umbenennen"
   )
MSG_HASH(
   MSG_INTERFACE,
   "Netzwerk-Karte"
   )
MSG_HASH(
   MSG_INTERNAL_STORAGE,
   "Interner Speicher"
   )
MSG_HASH(
   MSG_REMOVABLE_STORAGE,
   "Wechseldatenträger"
   )
MSG_HASH(
   MSG_INVALID_NICKNAME_SIZE,
   "Ungültige Nickname-Länge."
   )
MSG_HASH(
   MSG_IN_BYTES,
   "in Bytes"
   )
MSG_HASH(
   MSG_IN_MEGABYTES,
   "in Megabyte"
   )
MSG_HASH(
   MSG_IN_GIGABYTES,
   "in Gigabyte"
   )
MSG_HASH(
   MSG_LIBRETRO_ABI_BREAK,
   "ist gegen eine andere libretro-Version als diese kompiliert."
   )
MSG_HASH(
   MSG_LIBRETRO_FRONTEND,
   "Frontend für libretro"
   )
MSG_HASH(
   MSG_LOADED_STATE_FROM_SLOT,
   "Spielstand aus Speicherplatz #%d geladen."
   )
MSG_HASH(
   MSG_LOADED_STATE_FROM_SLOT_AUTO,
   "Spielstand aus Speicherplatz #-1 (auto) geladen."
   )
MSG_HASH(
   MSG_LOADING,
   "Laden..."
   )
MSG_HASH(
   MSG_FIRMWARE,
   "Eine oder mehrere Firmware-Dateien fehlen"
   )
MSG_HASH(
   MSG_LOADING_CONTENT_FILE,
   "Lade Inhalts-Datei"
   )
MSG_HASH(
   MSG_LOADING_HISTORY_FILE,
   "Lade Verlaufs-Datei"
   )
MSG_HASH(
   MSG_LOADING_FAVORITES_FILE,
   "Favoritendatei wird geladen"
   )
MSG_HASH(
   MSG_LOADING_STATE,
   "Lade Spielstand"
   )
MSG_HASH(
   MSG_MEMORY,
   "Speicher"
   )
MSG_HASH(
   MSG_MOVIE_FILE_IS_NOT_A_VALID_BSV1_FILE,
   "Filmdatei ist keine gültige BSV1-Datei."
   )
MSG_HASH(
   MSG_MOVIE_FORMAT_DIFFERENT_SERIALIZER_VERSION,
   "Filmdatei besitzt offenbar eine andere Serializer-Version. Wird höchstwahrscheinlich fehlschlagen."
   )
MSG_HASH(
   MSG_MOVIE_PLAYBACK_ENDED,
   "Film-Wiedergabe beendet."
   )
MSG_HASH(
   MSG_MOVIE_RECORD_STOPPED,
   "Beende Film-Aufzeichnung."
   )
MSG_HASH(
   MSG_NETPLAY_FAILED,
   "Netplay-Initialisierung fehlgeschlagen."
   )
MSG_HASH(
   MSG_NO_CONTENT_STARTING_DUMMY_CORE,
   "Kein Inhalt, starte Dummy-Core."
   )
MSG_HASH(
   MSG_NO_SAVE_STATE_HAS_BEEN_OVERWRITTEN_YET,
   "Kein Spielstand wurde bis jetzt überschrieben."
   )
MSG_HASH(
   MSG_NO_STATE_HAS_BEEN_LOADED_YET,
   "Kein Spielstand wurde bis jetzt geladen."
   )
MSG_HASH(
   MSG_OVERRIDES_ERROR_SAVING,
   "Fehler beim Speichern der Überschreibungen."
   )
MSG_HASH(
   MSG_OVERRIDES_SAVED_SUCCESSFULLY,
   "Überschreibungen erfolgreich gespeichert."
   )
MSG_HASH(
   MSG_PAUSED,
   "Pausiert."
   )
MSG_HASH(
   MSG_READING_FIRST_DATA_TRACK,
   "Lese ersten Daten-Track..."
   )
MSG_HASH(
   MSG_RECEIVED,
   "empfangen"
   )
MSG_HASH(
   MSG_RECORDING_TERMINATED_DUE_TO_RESIZE,
   "Aufzeichnung wurde wegen Größenänderung beendet."
   )
MSG_HASH(
   MSG_RECORDING_TO,
   "Aufzeichen in"
   )
MSG_HASH(
   MSG_REDIRECTING_CHEATFILE_TO,
   "Cheat-Datei umleiten in"
   )
MSG_HASH(
   MSG_REDIRECTING_SAVEFILE_TO,
   "Speicherdaten umleiten in"
   )
MSG_HASH(
   MSG_REDIRECTING_SAVESTATE_TO,
   "Spielstand umleiten in"
   )
MSG_HASH(
   MSG_REMAP_FILE_SAVED_SUCCESSFULLY,
   "Remap-Datei wurde erfolgreich gespeichert."
   )
MSG_HASH(
   MSG_REMAP_FILE_REMOVED_SUCCESSFULLY,
   "Remap-Datei wurde erfolgreich entfernt."
   )
MSG_HASH(
   MSG_REMOVED_DISK_FROM_TRAY,
   "Datenträger aus Laufwerk entfernt."
   )
MSG_HASH(
   MSG_REMOVING_TEMPORARY_CONTENT_FILE,
   "Entferne temporäre Inhalts-Datei"
   )
MSG_HASH(
   MSG_RESET,
   "Zurücksetzen"
   )
MSG_HASH(
   MSG_RESTARTING_RECORDING_DUE_TO_DRIVER_REINIT,
   "Starte Aufzeichnung neu, da Treiber reinitialisiert wurde."
   )
MSG_HASH(
   MSG_RESTORED_OLD_SAVE_STATE,
   "Alter Spielstand wiederhergestellt"
   )
MSG_HASH(
   MSG_RESTORING_DEFAULT_SHADER_PRESET_TO,
   "Shader: Standard-Shader-Voreinstellung wiederhergestellt zu"
   )
MSG_HASH(
   MSG_REVERTING_SAVEFILE_DIRECTORY_TO,
   "Setze Speicherdaten-Verzeichnis zurück auf"
   )
MSG_HASH(
   MSG_REVERTING_SAVESTATE_DIRECTORY_TO,
   "Setze Spielstand-Verzeichnis zurück auf"
   )
MSG_HASH(
   MSG_REWINDING,
   "Zurückspulen."
   )
MSG_HASH(
   MSG_REWIND_INIT,
   "Initialisiere Rückspul-Puffer mit Größe"
   )
MSG_HASH(
   MSG_REWIND_INIT_FAILED,
   "Fehler beim Initialisieren des Rückspul-Puffers. Zurückspulen wird deaktiviert."
   )
MSG_HASH(
   MSG_REWIND_INIT_FAILED_THREADED_AUDIO,
   "Implementierung verwendet separaten Audio-Thread. Zurückspulen kann nicht verwendet werden."
   )
MSG_HASH(
   MSG_REWIND_REACHED_END,
   "Ende des Rückspul-Puffers erreicht."
   )
MSG_HASH(
   MSG_SAVED_NEW_CONFIG_TO,
   "Neue Konfiguration gespeichert in"
   )
MSG_HASH(
   MSG_SAVED_STATE_TO_SLOT,
   "Spielstand in Speicherplatz #%d gespeichert."
   )
MSG_HASH(
   MSG_SAVED_STATE_TO_SLOT_AUTO,
   "Spielstand in Speicherplatz #-1 (auto) gespeichert."
   )
MSG_HASH(
   MSG_SAVED_SUCCESSFULLY_TO,
   "Erfolgreich gespeichert in"
   )
MSG_HASH(
   MSG_SAVING_RAM_TYPE,
   "Speichere RAM-Typ"
   )
MSG_HASH(
   MSG_SAVING_STATE,
   "Speichere aktuellen Zustand (Savestate)"
   )
MSG_HASH(
   MSG_SCANNING,
   "Durchsuchen"
   )
MSG_HASH(
   MSG_SCANNING_OF_DIRECTORY_FINISHED,
   "Durchsuchen des Verzeichnisses beendet"
   )
MSG_HASH(
   MSG_SENDING_COMMAND,
   "Sende Befehl"
   )
MSG_HASH(
   MSG_SEVERAL_PATCHES_ARE_EXPLICITLY_DEFINED,
   "Mehrere Patches wurden explizit definiert, ignoriere alle..."
   )
MSG_HASH(
   MSG_SHADER_PRESET_SAVED_SUCCESSFULLY,
   "Shader-Voreinstellung erfolgreich gespeichert."
   )
MSG_HASH(
   MSG_SKIPPING_SRAM_LOAD,
   "Überspringe Laden des SRAM."
   )
MSG_HASH(
   MSG_SLOW_MOTION,
   "Zeitlupe."
   )
MSG_HASH(
   MSG_FAST_FORWARD,
   "Snel vooruit."
   )
MSG_HASH(
   MSG_SLOW_MOTION_REWIND,
   "In Zeitlupe zurückspulen."
   )
MSG_HASH(
   MSG_SRAM_WILL_NOT_BE_SAVED,
   "SRAM wird nicht gespeichert."
   )
MSG_HASH(
   MSG_STARTING_MOVIE_PLAYBACK,
   "Starte Film-Wiedergabe."
   )
MSG_HASH(
   MSG_STARTING_MOVIE_RECORD_TO,
   "Starte Film-Aufzeichnung in"
   )
MSG_HASH(
   MSG_STATE_SIZE,
   "Spielstand-Größe"
   )
MSG_HASH(
   MSG_STATE_SLOT,
   "Spielstand-Speicherplatz"
   )
MSG_HASH(
   MSG_TAKING_SCREENSHOT,
   "Erstelle Bildschirmfoto."
   )
MSG_HASH(
   MSG_ACHIEVEMENT_UNLOCKED,
   "Errungenschaft freigeschaltet"
   )
MSG_HASH(
   MSG_CHANGE_THUMBNAIL_TYPE,
   "Vorschauart ändern"
   )
MSG_HASH(
   MSG_TOGGLE_CONTENT_METADATA,
   "Metadaten umschalten"
   )
MSG_HASH(
   MSG_NO_THUMBNAIL_AVAILABLE,
   "Keine Miniaturansicht verfügbar"
   )
MSG_HASH(
   MSG_PRESS_AGAIN_TO_QUIT,
   "Zum Beenden erneut drücken..."
   )
MSG_HASH(
   MSG_TO,
   "nach"
   )
MSG_HASH(
   MSG_UNDID_LOAD_STATE,
   "Laden des Spielstands wurde rückgängig gemacht."
   )
MSG_HASH(
   MSG_UNDOING_SAVE_STATE,
   "Speichern des Spielstands wurde rückgängig gemacht."
   )
MSG_HASH(
   MSG_UNKNOWN,
   "Unbekannt"
   )
MSG_HASH(
   MSG_UNPAUSED,
   "Nicht pausiert."
   )
MSG_HASH(
   MSG_UNRECOGNIZED_COMMAND,
   "Unbekannter Befehl"
   )
MSG_HASH(
   MSG_USING_CORE_NAME_FOR_NEW_CONFIG,
   "Verwende Core-Namen für neue Konfiguration."
   )
MSG_HASH(
   MSG_USING_LIBRETRO_DUMMY_CORE_RECORDING_SKIPPED,
   "Verwende libretro-Dumy-Core. Überspringe Aufzeichnung."
   )
MSG_HASH(
   MSG_VALUE_CONNECT_DEVICE_FROM_A_VALID_PORT,
   "Verbinde Gerät mit einem gültigen Anschluss."
   )
MSG_HASH(
   MSG_VALUE_DISCONNECTING_DEVICE_FROM_PORT,
   "Trenne Gerät von Anschluss"
   )
MSG_HASH(
   MSG_VALUE_REBOOTING,
   "Neustart..."
   )
MSG_HASH(
   MSG_VALUE_SHUTTING_DOWN,
   "Beenden..."
   )
MSG_HASH(
   MSG_VERSION_OF_LIBRETRO_API,
   "Version der libretro-API"
   )
MSG_HASH(
   MSG_VIEWPORT_SIZE_CALCULATION_FAILED,
   "Berechnung der Bildgröße fehlgeschlagen! Wird unter Verwendung von Rohdaten fortfahren. Dies wird wahrscheinlich nicht richtig funktionieren ..."
   )
MSG_HASH(
   MSG_FAILED,
   "fehlgeschlagen"
   )
MSG_HASH(
   MSG_SUCCEEDED,
   "erfolgreich"
   )
MSG_HASH(
   MSG_DEVICE_NOT_CONFIGURED,
   "nicht konfiguriert"
   )
MSG_HASH(
   MSG_DEVICE_NOT_CONFIGURED_FALLBACK,
   "nicht konfiguriert, verwende Rückfalloption"
   )
MSG_HASH(
   MSG_BLUETOOTH_SCAN_COMPLETE,
   "Bluetooth-Scan abgeschlossen."
   )
MSG_HASH(
   MSG_WIFI_SCAN_COMPLETE,
   "Suche nach WLAN-Netzwerken abgeschlossen."
   )
MSG_HASH(
   MSG_SCANNING_BLUETOOTH_DEVICES,
   "Suche nach Bluetooth-Geräten..."
   )
MSG_HASH(
   MSG_SCANNING_WIRELESS_NETWORKS,
   "Suche nach WLAN-Netzwerken..."
   )
MSG_HASH(
   MSG_NETPLAY_LAN_SCANNING,
   "Suche nach Netplay-Hosts..."
   )
MSG_HASH(
   MSG_PREPARING_FOR_CONTENT_SCAN,
   "Suchvorgang vorbereiten..."
   )
MSG_HASH(
   MSG_INPUT_ENABLE_SETTINGS_PASSWORD,
   "Passwort eingeben"
   )
MSG_HASH(
   MSG_INPUT_ENABLE_SETTINGS_PASSWORD_OK,
   "Passwort korrekt."
   )
MSG_HASH(
   MSG_INPUT_ENABLE_SETTINGS_PASSWORD_NOK,
   "Passwort falsch."
   )
MSG_HASH(
   MSG_INPUT_KIOSK_MODE_PASSWORD,
   "Passwort eingeben"
   )
MSG_HASH(
   MSG_INPUT_KIOSK_MODE_PASSWORD_OK,
   "Passwort korrekt."
   )
MSG_HASH(
   MSG_INPUT_KIOSK_MODE_PASSWORD_NOK,
   "Passwort falsch."
   )
MSG_HASH(
   MSG_CONFIG_OVERRIDE_LOADED,
   "Konfigurationsüberschreibung geladen."
   )
MSG_HASH(
   MSG_GAME_REMAP_FILE_LOADED,
   "Spiel-Remap-Datei geladen."
   )
MSG_HASH(
   MSG_DIRECTORY_REMAP_FILE_LOADED,
   "Inhaltsverzeichnis-Remap-Datei geladen."
   )
MSG_HASH(
   MSG_CORE_REMAP_FILE_LOADED,
   "Core Remap-Datei geladen."
   )
MSG_HASH(
   MSG_RUNAHEAD_ENABLED,
   "Run-Ahead aktiviert. Latenz-Frames entfernt: %u."
   )
MSG_HASH(
   MSG_RUNAHEAD_ENABLED_WITH_SECOND_INSTANCE,
   "Run-Ahead aktiviert mit Sekundärinstanz. Latenz-Frames entfernt: %u."
   )
MSG_HASH(
   MSG_RUNAHEAD_DISABLED,
   "Run-Ahead deaktiviert."
   )
MSG_HASH(
   MSG_RUNAHEAD_CORE_DOES_NOT_SUPPORT_SAVESTATES,
   "Run-Ahead wurde deaktiviert, da dieser Core keine Speicherabbilder unterstützt."
   )
MSG_HASH(
   MSG_RUNAHEAD_FAILED_TO_SAVE_STATE,
   "Fehler beim Erstellen des Abbilds. Run-Ahead wurde deaktiviert."
   )
MSG_HASH(
   MSG_RUNAHEAD_FAILED_TO_LOAD_STATE,
   "Fehler beim Laden des Abbilds. Run-Ahead wurde deaktiviert."
   )
MSG_HASH(
   MSG_RUNAHEAD_FAILED_TO_CREATE_SECONDARY_INSTANCE,
   "Fehler beim Erstellen der zweiten Instanz. Run-Ahead wird nun nur noch eine Instanz verwenden."
   )
MSG_HASH(
   MSG_SCANNING_OF_FILE_FINISHED,
   "Scannen von Datei beendet"
   )
MSG_HASH(
   MSG_CHEAT_INIT_SUCCESS,
   "Cheat-Suche erfolgreich gestartet"
   )
MSG_HASH(
   MSG_CHEAT_INIT_FAIL,
   "Fehler beim Starten der Cheat-Suche"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_NOT_INITIALIZED,
   "Suche wurde nicht initialisiert/gestartet"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_FOUND_MATCHES,
   "Neue Trefferzahl = %u"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_ADDED_MATCHES_SUCCESS,
   "%u Treffer hinzugefügt"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_ADDED_MATCHES_FAIL,
   "Fehler beim Hinzufügen von Treffern"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_ADD_MATCH_SUCCESS,
   "Code zum Treffer erstellt"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_ADD_MATCH_FAIL,
   "Fehler beim Erstellen des Codes"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_DELETE_MATCH_SUCCESS,
   "Treffer gelöscht"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_ADDED_MATCHES_TOO_MANY,
   "Nicht genügend Platz. Die Maximalanzahl der Cheats ist 100."
   )
MSG_HASH(
   MSG_CHEAT_ADD_TOP_SUCCESS,
   "Neuer Cheat am Anfang der Liste hinzugefügt."
   )
MSG_HASH(
   MSG_CHEAT_ADD_BOTTOM_SUCCESS,
   "Neuer Cheat am Ende der Liste hinzugefügt."
   )
MSG_HASH(
   MSG_CHEAT_DELETE_ALL_SUCCESS,
   "Alle Cheats gelöscht."
   )
MSG_HASH(
   MSG_CHEAT_ADD_BEFORE_SUCCESS,
   "Neuer Cheat vor diesem hinzugefügt."
   )
MSG_HASH(
   MSG_CHEAT_ADD_AFTER_SUCCESS,
   "Neuer Cheat nach diesem hinzugefügt."
   )
MSG_HASH(
   MSG_CHEAT_COPY_BEFORE_SUCCESS,
   "Cheat vor diesem kopiert."
   )
MSG_HASH(
   MSG_CHEAT_COPY_AFTER_SUCCESS,
   "Cheat nach diesem kopiert."
   )
MSG_HASH(
   MSG_CHEAT_DELETE_SUCCESS,
   "Cheat gelöscht."
   )
MSG_HASH(
   MSG_DEVICE_CONFIGURED_IN_PORT,
   "Konfiguriert im Port:"
   )
MSG_HASH(
   MSG_FAILED_TO_SET_DISK,
   "Fehler beim Einsetzen der Disc"
   )
MSG_HASH(
   MSG_FAILED_TO_SET_INITIAL_DISK,
   "Fehler beim Einsetzen der zuletzt benutzten Disc..."
   )
MSG_HASH(
   MSG_CHEEVOS_HARDCORE_MODE_DISABLED,
   "Ein Speicherzustand wurde geladen. Errungenschaften Hardcore Modus für die aktuelle Sitzung deaktiviert."
   )
MSG_HASH(
   MSG_CHEEVOS_HARDCORE_MODE_DISABLED_CHEAT,
   "Ein Cheat wurde aktiviert. Errungenschaften Hardcore Modus wurde für die aktuelle Sitzung deaktiviert."
   )
MSG_HASH(
   MSG_RESAMPLER_QUALITY_LOWEST,
   "Niedrigste"
   )
MSG_HASH(
   MSG_RESAMPLER_QUALITY_LOWER,
   "Niedriger"
   )
MSG_HASH(
   MSG_RESAMPLER_QUALITY_HIGHER,
   "Höher"
   )
MSG_HASH(
   MSG_RESAMPLER_QUALITY_HIGHEST,
   "Höchste"
   )
MSG_HASH(
   MSG_MISSING_ASSETS,
   "Warnung: Fehlende Assets; verwenden Sie den Online-Updater, falls verfügbar"
   )
MSG_HASH(
   MSG_DUMPING_DISC,
   "Dumpe Disc..."
   )
MSG_HASH(
   MSG_DRIVE_NUMBER,
   "Laufwerk %d"
   )
MSG_HASH(
   MSG_LOAD_CORE_FIRST,
   "Bitte zuerst einen Kern laden."
   )
MSG_HASH(
   MSG_DISC_DUMP_FAILED_TO_READ_FROM_DRIVE,
   "Fehler beim Lesen vom Laufwerk. Dump abgebrochen."
   )
MSG_HASH(
   MSG_DISC_DUMP_FAILED_TO_WRITE_TO_DISK,
   "Fehler beim Schreiben. Dump abgebrochen."
   )
MSG_HASH(
   MSG_NO_DISC_INSERTED,
   "Es ist keine Disc in das Laufwerk eingelegt."
   )
MSG_HASH(
   MSG_SHADER_PRESET_REMOVED_SUCCESSFULLY,
   "Shader-Voreinstellung erfolgreich entfernt."
   )
MSG_HASH(
   MSG_ERROR_REMOVING_SHADER_PRESET,
   "Fehler beim Löschen der Shader-Voreinstellung."
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_DAT_FILE_INVALID,
   "Ungültige Arcade-DAT-Datei ausgewählt"
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_DAT_FILE_TOO_LARGE,
   "Ausgewählte Arcade-DAT-Datei ist zu groß (unzureichender freier Speicher)"
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_DAT_FILE_LOAD_ERROR,
   "Fehler beim Laden der Arcade-DAT-Datei (ungültiges Format?)"
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_INVALID_CONFIG,
   "Ungültige manuelle Scan-Konfiguration"
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_INVALID_CONTENT,
   "Keine gültigen Inhalte gefunden"
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_START,
   "Scanne Inhalt: "
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_IN_PROGRESS,
   "Durchsuchen: "
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_M3U_CLEANUP,
   "Säubere M3U-Einträge: "
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_END,
   "Scan abgeschlossen: "
   )
MSG_HASH(
   MSG_CORE_BACKUP_SCANNING_CORE,
   "Scanne Core: "
   )
MSG_HASH(
   MSG_CORE_BACKUP_ALREADY_EXISTS,
   "Sicherung des installierten Cores existiert bereits: "
   )
MSG_HASH(
   MSG_BACKING_UP_CORE,
   "Sichere Core: "
   )
MSG_HASH(
   MSG_PRUNING_CORE_BACKUP_HISTORY,
   "Entferne veraltete Backups: "
   )
MSG_HASH(
   MSG_CORE_BACKUP_COMPLETE,
   "Core-Backup erstellt: "
   )
MSG_HASH(
   MSG_CORE_RESTORATION_ALREADY_INSTALLED,
   "Ausgewählte Core-Sicherung ist bereits installiert: "
   )
MSG_HASH(
   MSG_RESTORING_CORE,
   "Wiederherstellen des Cores: "
   )
MSG_HASH(
   MSG_CORE_RESTORATION_COMPLETE,
   "Core-Wiederherstellung abgeschlossen: "
   )
MSG_HASH(
   MSG_CORE_INSTALLATION_ALREADY_INSTALLED,
   "Ausgewählte Core-Datei ist bereits installiert: "
   )
MSG_HASH(
   MSG_INSTALLING_CORE,
   "Installiere Core: "
   )
MSG_HASH(
   MSG_CORE_INSTALLATION_COMPLETE,
   "Core Installation abgeschlossen: "
   )
MSG_HASH(
   MSG_CORE_RESTORATION_INVALID_CONTENT,
   "Ungültige Core-Datei ausgewählt: "
   )
MSG_HASH(
   MSG_CORE_BACKUP_FAILED,
   "Core-Backup fehlgeschlagen: "
   )
MSG_HASH(
   MSG_CORE_RESTORATION_FAILED,
   "Core-Wiederherstellung fehlgeschlagen: "
   )
MSG_HASH(
   MSG_CORE_INSTALLATION_FAILED,
   "Core-Installation fehlgeschlagen: "
   )
MSG_HASH(
   MSG_CORE_RESTORATION_DISABLED,
   "Core-Wiederherstellung deaktiviert - Core ist gesperrt: "
   )
MSG_HASH(
   MSG_CORE_INSTALLATION_DISABLED,
   "Core-Installation deaktiviert - Core gesperrt: "
   )
MSG_HASH(
   MSG_CORE_LOCK_FAILED,
   "Fehler beim Sperren des Kerns: "
   )
MSG_HASH(
   MSG_CORE_UNLOCK_FAILED,
   "Fehler beim Entsperren des Kerns: "
   )
MSG_HASH(
   MSG_CORE_DELETE_DISABLED,
   "Löschen des Cores deaktiviert - Core gesperrt: "
   )
MSG_HASH(
   MSG_UNSUPPORTED_VIDEO_MODE,
   "Nicht unterstützter Video-Modus"
   )

/* Lakka */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_LAKKA,
   "Lakka aktualisieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FRONTEND_NAME,
   "Frontend-Name"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_LAKKA_VERSION,
   "Lakka-Version"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REBOOT,
   "Neustart"
   )

/* Environment Specific Settings */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INTERNAL_STORAGE_STATUS,
   "Status des internen Speichers"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WIDGET_SCALE_FACTOR,
   "Skalierungsüberschreibung für Grafik-Widgets"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WIDGET_SCALE_FACTOR,
   "Wendet beim Zeichnen von Anzeige-Widgets eine manuelle Überschreibung des Skalierungsfaktors an. Gilt nur, wenn \"Grafik-Widgets automatisch skalieren\" deaktiviert ist. Kann verwendet werden, um die Größe dekorierter Benachrichtigungen, Anzeigen und Steuerelemente unabhängig vom Menü selbst zu erhöhen oder zu verringern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCREEN_RESOLUTION,
   "Bildschirm-Auflösung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHUTDOWN,
   "Beenden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FILE_BROWSER_OPEN_UWP_PERMISSIONS,
   "Externen Dateizugriff ermöglichen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FILE_BROWSER_OPEN_UWP_PERMISSIONS,
   "Die Einstellungen für die Windows-Dateizugriffsberechtigungen öffnen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FILE_BROWSER_OPEN_PICKER,
   "Öffnen..."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FILE_BROWSER_OPEN_PICKER,
   "Ein anderes Verzeichnis mit der Systemdateiauswahl öffnen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FILTER_FLICKER,
   "Flacker-Filter aktivieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_GAMMA,
   "Gamma"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SOFT_FILTER,
   "Soft-Filter aktivieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BLUETOOTH_SETTINGS,
   "Sucht nach Bluetooth-Geräten und verbindet sie."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_WIFI_SETTINGS,
   "WLAN"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_WIFI_SETTINGS,
   "Sucht nach drahtlosen Netzwerken und stellt eine Verbindung her."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VFILTER,
   "Entflackern"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VI_WIDTH,
   "VI-Bildgröße"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_OVERSCAN_CORRECTION_TOP,
   "Overscan-Korrektur (oben)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_OVERSCAN_CORRECTION_TOP,
   "Das Zuschneiden des Overscans anpassen, indem die Bildgröße um die angegebene Anzahl von Scanlinien (vom oberen Bildschirmrand) reduziert wird. Hinweis: Kann Skalierungsartefakte einführen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_OVERSCAN_CORRECTION_BOTTOM,
   "Overscan-Korrektur (unten)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_OVERSCAN_CORRECTION_BOTTOM,
   "Das Zuschneiden des Overscans anpassen, indem die Bildgröße um die angegebene Anzahl von Scanlinien (vom unteren Bildschirmrand) reduziert wird. Hinweis: Kann Skalierungsartefakte einführen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SUSTAINED_PERFORMANCE_MODE,
   "Dauerleistungsmodus"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PAL60_ENABLE,
   "Verwende PAL60-Modus"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_RESTART_KEY,
   "RetroArch neu starten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_RESTART_KEY,
   "Beendet und startet RetroArch neu. Erforderlich, um bestimmte Menüeinstellungen zu aktivieren(z. B. beim Ändern des Menütreibers)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_BLOCK_FRAMES,
   "Warte auf Audio-Frames"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_PREFER_FRONT_TOUCH,
   "Touch-Eingabe auf der Vorderseite bevorzugen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TOUCH_ENABLE,
   "Touch-Eingabe aktivieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ICADE_ENABLE,
   "Tastatur-Controller-Zuordnung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_KEYBOARD_GAMEPAD_MAPPING_TYPE,
   "Tastatur-Controller-Zuordnungstyp"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_SMALL_KEYBOARD_ENABLE,
   "Kleine Tastatur aktivieren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_BLOCK_TIMEOUT,
   "Eingabe-Block-Timeout"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_BLOCK_TIMEOUT,
   "Anzahl an Millisekunden, die gewartet werden, bevor eine vollständige Eingabe getätigt wird. Verwende diese Option, wenn Probleme beim gleichzeitigen Drücken von Tasten auftreten (nur Android)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_REBOOT,
   "Zeige 'Neu starten'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_REBOOT,
   "Zeige/verstecke die Option 'Neu starten'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_SHUTDOWN,
   "Zeige 'Beenden'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_SHUTDOWN,
   "Zeige/verstecke die Option 'Beenden'."
   )
MSG_HASH(
   MSG_LOCAL,
   "Lokal"
   )
MSG_HASH(
   MSG_READ_WRITE,
   "Lesen/Schreiben"
   )
MSG_HASH(
   MSG_READ_ONLY,
   "Schreibgeschützt"
   )

#ifdef HAVE_LAKKA_SWITCH
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SWITCH_GPU_PROFILE,
   "GPU Übertakten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SWITCH_GPU_PROFILE,
   "Über- oder Untertakten der Switch GPU."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REBOOT_RCM,
   "Neustarten im RCM"
   )
#endif
#if defined(HAVE_LAKKA_SWITCH) || defined(HAVE_LIBNX)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SWITCH_CPU_PROFILE,
   "CPU Übertakten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SWITCH_CPU_PROFILE,
   "Übertakten der Switch CPU."
   )
#endif
#ifdef HAVE_LAKKA
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BLUETOOTH_ENABLE,
   "Bluetooth aktivieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BLUETOOTH_ENABLE,
   "Aktiviere oder deaktiviere Bluetooth."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LAKKA_SERVICES,
   "Dienste"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SERVICES_SETTINGS,
   "Verwalte Service-Einstellungen deines Betriebssystems."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAMBA_ENABLE,
   "SAMBA aktivieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAMBA_ENABLE,
   "Aktiviere die Netzwerkfreigabe deiner Ordner."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SSH_ENABLE,
   "SSH aktivieren"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SSH_ENABLE,
   "Aktiviere Fernzugriff auf die Kommandozeile."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOCALAP_ENABLE,
   "Wi-Fi-Zugangspunkt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOCALAP_ENABLE,
   "Wi-Fi Access Point aktivieren oder deaktivieren."
   )
MSG_HASH(
   MSG_LOCALAP_SWITCHING_OFF,
   "Wi-Fi Access Point wird ausgeschaltet."
   )
MSG_HASH(
   MSG_WIFI_DISCONNECT_FROM,
   "Trenne von Wi-Fi '%s'"
   )
MSG_HASH(
   MSG_LOCALAP_ALREADY_RUNNING,
   "Wi-Fi Access Point ist bereits gestartet"
   )
MSG_HASH(
   MSG_LOCALAP_NOT_RUNNING,
   "Wi-Fi Access Point wird nicht ausgeführt"
   )
MSG_HASH(
   MSG_LOCALAP_STARTING,
   "Starte Wi-Fi Access Point mit SSID=%s und Passwort=%s"
   )
MSG_HASH(
   MSG_LOCALAP_ERROR_CONFIG_CREATE,
   "Konnte die Wi-Fi Access Point Konfigurationsdatei nicht erstellen."
   )
MSG_HASH(
   MSG_LOCALAP_ERROR_CONFIG_PARSE,
   "Falsche Konfigurationsdatei - APNAME oder PASSWORD in %s nicht gefunden"
   )
#endif
#ifdef GEKKO
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_SCALE,
   "Maus-Skala"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_MOUSE_SCALE,
   "X/Y-Skala für Wiimote Lichtpistolengeschwindigkeit anpassen."
   )
#endif
#ifdef HAVE_ODROIDGO2
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RGA_SCALING,
   "RGA-Skalierung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_RGA_SCALING,
   "RGA-Skalierung und bikubischer Filter. Kann Fehler bei Widgets verursachen."
   )
#else
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_CTX_SCALING,
   "Kontextspezifische Skalierung"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_CTX_SCALING,
   "Hardware-Kontextskalierung (falls verfügbar)."
   )
#endif
#if defined(_3DS)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_3DS_LCD_BOTTOM,
   "3DS-Bildschirm unten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_3DS_LCD_BOTTOM,
   "Statusanzeige auf dem unteren Bildschirm aktivieren. Deaktivieren, um die Akkulaufzeit zu erhöhen und die Leistung zu verbessern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_3DS_DISPLAY_MODE,
   "3DS Anzeigemodus"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_3DS_DISPLAY_MODE,
   "Wählt zwischen 3D- und 2D-Anzeigemodus. Im '3D' Modus sind Pixel quadratisch und ein Tiefeneffekt wird beim Anzeigen des Spielmenüs angewendet. '2D' Modus bietet die beste Leistung."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CTR_VIDEO_MODE_2D_400X240,
   "2D (Pixel-Raster-Effekt)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CTR_VIDEO_MODE_2D_800X240,
   "2D (hohe Auflösung)"
   )
#endif
#ifdef HAVE_QT
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SCAN_FINISHED,
   "Scan abgeschlossen. <br><br>\nDas korrekte Scannen nach Inhalten erfordert, dass:\n<ul><li>ein kompatibler Core bereits heruntergeladen worden ist</li>\n<li>die Core-Infodateien aktualisiert wurden</li>\n<li>die Datenbanken aktualisiert wurden</li>\n<li>RetroArch nach dem Ausführen jeglicher der oberen Punkte neu gestartet wurde.</li></ul>\nSchließlich muss der Inhalt mit den <a href=\"https://docs.libretro.com/guides/roms-playlists-thumbnails/#sources\">Datenbanken von hier</a> übereinstimmen. Falls es immer noch nicht funktioniert, kann <a href=\"https://www.github.com/libretro/RetroArch/issues\">hier ein Fehlerbericht erstattet werden</a>."
   )
#endif
