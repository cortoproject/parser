/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef CORTO_SCRIPT_PARSER_BAKE_CONFIG_H
#define CORTO_SCRIPT_PARSER_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <antlr4.cpp>

/* Headers of private dependencies */
#ifdef CORTO_SCRIPT_PARSER_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#if CORTO_SCRIPT_PARSER_IMPL && defined _MSC_VER
#define CORTO_SCRIPT_PARSER_EXPORT __declspec(dllexport)
#elif CORTO_SCRIPT_PARSER_IMPL
#define CORTO_SCRIPT_PARSER_EXPORT __attribute__((__visibility__("default")))
#elif defined _MSC_VER
#define CORTO_SCRIPT_PARSER_EXPORT __declspec(dllimport)
#else
#define CORTO_SCRIPT_PARSER_EXPORT
#endif

#endif

