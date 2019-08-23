/*
 * Copyright (C) 2017 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/******************************************************************
 * THIS CODE WAS GENERATED BY matchgen.py, DO NOT MODIFY DIRECTLY *
 ******************************************************************/

#include <private/android_filesystem_config.h>

int MatchExtension(const char* ext) {

    switch (ext[0]) {
    case '3':
        switch (ext[1]) {
        case 'g': case 'G':
            switch (ext[2]) {
            case '2':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_VIDEO;
                }
            case 'p': case 'P':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_VIDEO;
                case 'p': case 'P':
                    switch (ext[4]) {
                    case '\0': return AID_MEDIA_VIDEO;
                    case '2':
                        switch (ext[5]) {
                        case '\0': return AID_MEDIA_VIDEO;
                        }
                    }
                }
            }
        }
    case 'a': case 'A':
        switch (ext[1]) {
        case 'a': case 'A':
            switch (ext[2]) {
            case 'c': case 'C':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_AUDIO;
                }
            }
        case 'i': case 'I':
            switch (ext[2]) {
            case 'f': case 'F':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_AUDIO;
                case 'c': case 'C':
                    switch (ext[4]) {
                    case '\0': return AID_MEDIA_AUDIO;
                    }
                case 'f': case 'F':
                    switch (ext[4]) {
                    case '\0': return AID_MEDIA_AUDIO;
                    }
                }
            }
        case 'm': case 'M':
            switch (ext[2]) {
            case 'r': case 'R':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_AUDIO;
                }
            }
        case 'r': case 'R':
            switch (ext[2]) {
            case 't': case 'T':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            case 'w': case 'W':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            }
        case 's': case 'S':
            switch (ext[2]) {
            case 'f': case 'F':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_VIDEO;
                }
            case 'x': case 'X':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_VIDEO;
                }
            }
        case 'v': case 'V':
            switch (ext[2]) {
            case 'i': case 'I':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_VIDEO;
                }
            }
        case 'w': case 'W':
            switch (ext[2]) {
            case 'b': case 'B':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_AUDIO;
                }
            }
        }
    case 'b': case 'B':
        switch (ext[1]) {
        case 'm': case 'M':
            switch (ext[2]) {
            case 'p': case 'P':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            }
        }
    case 'c': case 'C':
        switch (ext[1]) {
        case 'r': case 'R':
            switch (ext[2]) {
            case '2':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            }
        }
    case 'd': case 'D':
        switch (ext[1]) {
        case 'i': case 'I':
            switch (ext[2]) {
            case 'f': case 'F':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_VIDEO;
                }
            }
        case 'l': case 'L':
            switch (ext[2]) {
            case '\0': return AID_MEDIA_VIDEO;
            }
        case 'n': case 'N':
            switch (ext[2]) {
            case 'g': case 'G':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            }
        case 'v': case 'V':
            switch (ext[2]) {
            case '\0': return AID_MEDIA_VIDEO;
            }
        }
    case 'f': case 'F':
        switch (ext[1]) {
        case 'l': case 'L':
            switch (ext[2]) {
            case 'a': case 'A':
                switch (ext[3]) {
                case 'c': case 'C':
                    switch (ext[4]) {
                    case '\0': return AID_MEDIA_AUDIO;
                    }
                }
            case 'i': case 'I':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_VIDEO;
                }
            }
        }
    case 'g': case 'G':
        switch (ext[1]) {
        case 'i': case 'I':
            switch (ext[2]) {
            case 'f': case 'F':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            }
        case 's': case 'S':
            switch (ext[2]) {
            case 'm': case 'M':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_AUDIO;
                }
            }
        }
    case 'j': case 'J':
        switch (ext[1]) {
        case 'n': case 'N':
            switch (ext[2]) {
            case 'g': case 'G':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            }
        case 'p': case 'P':
            switch (ext[2]) {
            case 'e': case 'E':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                case 'g': case 'G':
                    switch (ext[4]) {
                    case '\0': return AID_MEDIA_IMAGE;
                    }
                }
            case 'g': case 'G':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            }
        }
    case 'l': case 'L':
        switch (ext[1]) {
        case 's': case 'S':
            switch (ext[2]) {
            case 'f': case 'F':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_VIDEO;
                }
            case 'x': case 'X':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_VIDEO;
                }
            }
        }
    case 'm': case 'M':
        switch (ext[1]) {
        case '3':
            switch (ext[2]) {
            case 'u': case 'U':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_AUDIO;
                }
            }
        case '4':
            switch (ext[2]) {
            case 'a': case 'A':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_AUDIO;
                }
            case 'v': case 'V':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_VIDEO;
                }
            }
        case 'k': case 'K':
            switch (ext[2]) {
            case 'a': case 'A':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_AUDIO;
                }
            case 'v': case 'V':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_VIDEO;
                }
            }
        case 'n': case 'N':
            switch (ext[2]) {
            case 'g': case 'G':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_VIDEO;
                }
            }
        case 'o': case 'O':
            switch (ext[2]) {
            case 'v': case 'V':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_VIDEO;
                case 'i': case 'I':
                    switch (ext[4]) {
                    case 'e': case 'E':
                        switch (ext[5]) {
                        case '\0': return AID_MEDIA_VIDEO;
                        }
                    }
                }
            }
        case 'p': case 'P':
            switch (ext[2]) {
            case '2':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_AUDIO;
                }
            case '3':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_AUDIO;
                }
            case '4':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_VIDEO;
                }
            case 'e': case 'E':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_VIDEO;
                case 'g': case 'G':
                    switch (ext[4]) {
                    case '\0': return AID_MEDIA_VIDEO;
                    case 'a': case 'A':
                        switch (ext[5]) {
                        case '\0': return AID_MEDIA_AUDIO;
                        }
                    }
                }
            case 'g': case 'G':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_VIDEO;
                case 'a': case 'A':
                    switch (ext[4]) {
                    case '\0': return AID_MEDIA_AUDIO;
                    }
                }
            }
        case 'x': case 'X':
            switch (ext[2]) {
            case 'u': case 'U':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_VIDEO;
                }
            }
        }
    case 'n': case 'N':
        switch (ext[1]) {
        case 'e': case 'E':
            switch (ext[2]) {
            case 'f': case 'F':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            }
        case 'r': case 'R':
            switch (ext[2]) {
            case 'w': case 'W':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            }
        }
    case 'o': case 'O':
        switch (ext[1]) {
        case 'g': case 'G':
            switch (ext[2]) {
            case 'a': case 'A':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_AUDIO;
                }
            case 'g': case 'G':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_AUDIO;
                }
            }
        case 'r': case 'R':
            switch (ext[2]) {
            case 'f': case 'F':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            }
        }
    case 'p': case 'P':
        switch (ext[1]) {
        case 'b': case 'B':
            switch (ext[2]) {
            case 'm': case 'M':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            }
        case 'c': case 'C':
            switch (ext[2]) {
            case 'x': case 'X':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            }
        case 'e': case 'E':
            switch (ext[2]) {
            case 'f': case 'F':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            }
        case 'g': case 'G':
            switch (ext[2]) {
            case 'm': case 'M':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            }
        case 'l': case 'L':
            switch (ext[2]) {
            case 's': case 'S':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_AUDIO;
                }
            }
        case 'n': case 'N':
            switch (ext[2]) {
            case 'g': case 'G':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            case 'm': case 'M':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            }
        case 'p': case 'P':
            switch (ext[2]) {
            case 'm': case 'M':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            }
        case 's': case 'S':
            switch (ext[2]) {
            case 'd': case 'D':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            }
        }
    case 'q': case 'Q':
        switch (ext[1]) {
        case 't': case 'T':
            switch (ext[2]) {
            case '\0': return AID_MEDIA_VIDEO;
            }
        }
    case 'r': case 'R':
        switch (ext[1]) {
        case 'a': case 'A':
            switch (ext[2]) {
            case '\0': return AID_MEDIA_AUDIO;
            case 'm': case 'M':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_AUDIO;
                }
            case 's': case 'S':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            }
        case 'g': case 'G':
            switch (ext[2]) {
            case 'b': case 'B':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            }
        case 'm': case 'M':
            switch (ext[2]) {
            case '\0': return AID_MEDIA_AUDIO;
            }
        case 'w': case 'W':
            switch (ext[2]) {
            case '2':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            }
        }
    case 's': case 'S':
        switch (ext[1]) {
        case 'd': case 'D':
            switch (ext[2]) {
            case '2':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_AUDIO;
                }
            }
        case 'n': case 'N':
            switch (ext[2]) {
            case 'd': case 'D':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_AUDIO;
                }
            }
        case 'r': case 'R':
            switch (ext[2]) {
            case 'w': case 'W':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            }
        case 'v': case 'V':
            switch (ext[2]) {
            case 'g': case 'G':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                case 'z': case 'Z':
                    switch (ext[4]) {
                    case '\0': return AID_MEDIA_IMAGE;
                    }
                }
            }
        }
    case 't': case 'T':
        switch (ext[1]) {
        case 'i': case 'I':
            switch (ext[2]) {
            case 'f': case 'F':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                case 'f': case 'F':
                    switch (ext[4]) {
                    case '\0': return AID_MEDIA_IMAGE;
                    }
                }
            }
        case 's': case 'S':
            switch (ext[2]) {
            case '\0': return AID_MEDIA_VIDEO;
            }
        }
    case 'v': case 'V':
        switch (ext[1]) {
        case 'o': case 'O':
            switch (ext[2]) {
            case 'b': case 'B':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_VIDEO;
                }
            }
        }
    case 'w': case 'W':
        switch (ext[1]) {
        case 'a': case 'A':
            switch (ext[2]) {
            case 'v': case 'V':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_AUDIO;
                }
            case 'x': case 'X':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_AUDIO;
                }
            }
        case 'b': case 'B':
            switch (ext[2]) {
            case 'm': case 'M':
                switch (ext[3]) {
                case 'p': case 'P':
                    switch (ext[4]) {
                    case '\0': return AID_MEDIA_IMAGE;
                    }
                }
            }
        case 'e': case 'E':
            switch (ext[2]) {
            case 'b': case 'B':
                switch (ext[3]) {
                case 'm': case 'M':
                    switch (ext[4]) {
                    case '\0': return AID_MEDIA_VIDEO;
                    }
                case 'p': case 'P':
                    switch (ext[4]) {
                    case '\0': return AID_MEDIA_IMAGE;
                    }
                }
            }
        case 'm': case 'M':
            switch (ext[2]) {
            case '\0': return AID_MEDIA_VIDEO;
            case 'a': case 'A':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_AUDIO;
                }
            case 'v': case 'V':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_VIDEO;
                }
            case 'x': case 'X':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_VIDEO;
                }
            }
        case 'r': case 'R':
            switch (ext[2]) {
            case 'f': case 'F':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_VIDEO;
                }
            }
        case 'v': case 'V':
            switch (ext[2]) {
            case 'x': case 'X':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_VIDEO;
                }
            }
        }
    case 'x': case 'X':
        switch (ext[1]) {
        case 'b': case 'B':
            switch (ext[2]) {
            case 'm': case 'M':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            }
        case 'p': case 'P':
            switch (ext[2]) {
            case 'm': case 'M':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            }
        case 'w': case 'W':
            switch (ext[2]) {
            case 'd': case 'D':
                switch (ext[3]) {
                case '\0': return AID_MEDIA_IMAGE;
                }
            }
        }
    }

    return 0;
}
