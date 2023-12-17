#pragma once

#include "header0.h"
#include "malloc.h"
#include "stdio.h"
#include "stdbool.h"
#include "string.h"
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <sys/resource.h>





void test0 ();
void test1 ();
struct elle* inputelle ();
void DBMSinsert (struct tree* tr);
void DBMSsearch (struct tree * tr);
void DBMSdel (struct tree * tr);
