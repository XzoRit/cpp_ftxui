#include "ftxui/screen/color_info.hpp"

namespace ftxui {

// clang-format off
const ColorInfo palette256[] = {
     {"Black"              , 0   , 0   , 0   , 0   , 0   , 0   , 0   } ,
     {"Maroon"             , 1   , 128 , 0   , 0   , 0   , 255 , 128 } ,
     {"Green"              , 2   , 0   , 128 , 0   , 85  , 255 , 128 } ,
     {"Olive"              , 3   , 128 , 128 , 0   , 43  , 255 , 128 } ,
     {"Navy"               , 4   , 0   , 0   , 128 , 171 , 255 , 128 } ,
     {"Purple"             , 5   , 128 , 0   , 128 , 213 , 255 , 128 } ,
     {"Teal"               , 6   , 0   , 128 , 128 , 128 , 255 , 128 } ,
     {"Silver"             , 7   , 192 , 192 , 192 , 0   , 0   , 192 } ,
     {"Grey"               , 8   , 128 , 128 , 128 , 0   , 0   , 128 } ,
     {"Red"                , 9   , 255 , 0   , 0   , 0   , 255 , 255 } ,
     {"Lime"               , 10  , 0   , 255 , 0   , 85  , 255 , 255 } ,
     {"Yellow"             , 11  , 255 , 255 , 0   , 43  , 255 , 255 } ,
     {"Blue"               , 12  , 0   , 0   , 255 , 171 , 255 , 255 } ,
     {"Fuchsia"            , 13  , 255 , 0   , 255 , 213 , 255 , 255 } ,
     {"Aqua"               , 14  , 0   , 255 , 255 , 128 , 255 , 255 } ,
     {"White"              , 15  , 255 , 255 , 255 , 0   , 0   , 255 } ,
     {"Grey0"              , 16  , 0   , 0   , 0   , 0   , 0   , 0   } ,
     {"NavyBlue"           , 17  , 0   , 0   , 95  , 171 , 255 , 95  } ,
     {"DarkBlue"           , 18  , 0   , 0   , 135 , 171 , 255 , 135 } ,
     {"Blue3"              , 19  , 0   , 0   , 175 , 171 , 255 , 175 } ,
     {"Blue3Bis"           , 20  , 0   , 0   , 215 , 171 , 255 , 215 } ,
     {"Blue1"              , 21  , 0   , 0   , 255 , 171 , 255 , 255 } ,
     {"DarkGreen"          , 22  , 0   , 95  , 0   , 85  , 255 , 95  } ,
     {"DeepSkyBlue4"       , 23  , 0   , 95  , 95  , 128 , 255 , 95  } ,
     {"DeepSkyBlue4Bis"    , 24  , 0   , 95  , 135 , 141 , 255 , 135 } ,
     {"DeepSkyBlue4Ter"    , 25  , 0   , 95  , 175 , 148 , 255 , 175 } ,
     {"DodgerBlue3"        , 26  , 0   , 95  , 215 , 152 , 255 , 215 } ,
     {"DodgerBlue2"        , 27  , 0   , 95  , 255 , 155 , 255 , 255 } ,
     {"Green4"             , 28  , 0   , 135 , 0   , 85  , 255 , 135 } ,
     {"SpringGreen4"       , 29  , 0   , 135 , 95  , 115 , 255 , 135 } ,
     {"Turquoise4"         , 30  , 0   , 135 , 135 , 128 , 255 , 135 } ,
     {"DeepSkyBlue3"       , 31  , 0   , 135 , 175 , 138 , 255 , 175 } ,
     {"DeepSkyBlue3Bis"    , 32  , 0   , 135 , 215 , 144 , 255 , 215 } ,
     {"DodgerBlue1"        , 33  , 0   , 135 , 255 , 149 , 255 , 255 } ,
     {"Green3"             , 34  , 0   , 175 , 0   , 85  , 255 , 175 } ,
     {"SpringGreen3"       , 35  , 0   , 175 , 95  , 108 , 255 , 175 } ,
     {"DarkCyan"           , 36  , 0   , 175 , 135 , 118 , 255 , 175 } ,
     {"LightSeaGreen"      , 37  , 0   , 175 , 175 , 128 , 255 , 175 } ,
     {"DeepSkyBlue2"       , 38  , 0   , 175 , 215 , 136 , 255 , 215 } ,
     {"DeepSkyBlue1"       , 39  , 0   , 175 , 255 , 142 , 255 , 255 } ,
     {"Green3Bis"          , 40  , 0   , 215 , 0   , 85  , 255 , 215 } ,
     {"SpringGreen3Bis"    , 41  , 0   , 215 , 95  , 104 , 255 , 215 } ,
     {"SpringGreen2"       , 42  , 0   , 215 , 135 , 112 , 255 , 215 } ,
     {"Cyan3"              , 43  , 0   , 215 , 175 , 120 , 255 , 215 } ,
     {"DarkTurquoise"      , 44  , 0   , 215 , 215 , 128 , 255 , 215 } ,
     {"Turquoise2"         , 45  , 0   , 215 , 255 , 135 , 255 , 255 } ,
     {"Green1"             , 46  , 0   , 255 , 0   , 85  , 255 , 255 } ,
     {"SpringGreen2Bis"    , 47  , 0   , 255 , 95  , 101 , 255 , 255 } ,
     {"SpringGreen1"       , 48  , 0   , 255 , 135 , 107 , 255 , 255 } ,
     {"MediumSpringGreen"  , 49  , 0   , 255 , 175 , 114 , 255 , 255 } ,
     {"Cyan2"              , 50  , 0   , 255 , 215 , 121 , 255 , 255 } ,
     {"Cyan1"              , 51  , 0   , 255 , 255 , 128 , 255 , 255 } ,
     {"DarkRed"            , 52  , 95  , 0   , 0   , 0   , 255 , 95  } ,
     {"DeepPink4Ter"       , 53  , 95  , 0   , 95  , 213 , 255 , 95  } ,
     {"Purple4"            , 54  , 95  , 0   , 135 , 201 , 255 , 135 } ,
     {"Purple4Bis"         , 55  , 95  , 0   , 175 , 194 , 255 , 175 } ,
     {"Purple3"            , 56  , 95  , 0   , 215 , 190 , 255 , 215 } ,
     {"BlueViolet"         , 57  , 95  , 0   , 255 , 187 , 255 , 255 } ,
     {"Orange4"            , 58  , 95  , 95  , 0   , 43  , 255 , 95  } ,
     {"Grey37"             , 59  , 95  , 95  , 95  , 0   , 0   , 95  } ,
     {"MediumPurple4"      , 60  , 95  , 95  , 135 , 171 , 75  , 135 } ,
     {"SlateBlue3"         , 61  , 95  , 95  , 175 , 171 , 116 , 175 } ,
     {"SlateBlue3Bis"      , 62  , 95  , 95  , 215 , 171 , 142 , 215 } ,
     {"RoyalBlue1"         , 63  , 95  , 95  , 255 , 171 , 160 , 255 } ,
     {"Chartreuse4"        , 64  , 95  , 135 , 0   , 55  , 255 , 135 } ,
     {"DarkSeaGreen4"      , 65  , 95  , 135 , 95  , 85  , 75  , 135 } ,
     {"PaleTurquoise4"     , 66  , 95  , 135 , 135 , 128 , 75  , 135 } ,
     {"SteelBlue"          , 67  , 95  , 135 , 175 , 150 , 116 , 175 } ,
     {"SteelBlue3"         , 68  , 95  , 135 , 215 , 157 , 142 , 215 } ,
     {"CornflowerBlue"     , 69  , 95  , 135 , 255 , 161 , 160 , 255 } ,
     {"Chartreuse3"        , 70  , 95  , 175 , 0   , 62  , 255 , 175 } ,
     {"DarkSeaGreen4Bis"   , 71  , 95  , 175 , 95  , 85  , 116 , 175 } ,
     {"CadetBlue"          , 72  , 95  , 175 , 135 , 106 , 116 , 175 } ,
     {"CadetBlueBis"       , 73  , 95  , 175 , 175 , 128 , 116 , 175 } ,
     {"SkyBlue3"           , 74  , 95  , 175 , 215 , 143 , 142 , 215 } ,
     {"SteelBlue1"         , 75  , 95  , 175 , 255 , 150 , 160 , 255 } ,
     {"Chartreuse3Bis"     , 76  , 95  , 215 , 0   , 66  , 255 , 215 } ,
     {"PaleGreen3Bis"      , 77  , 95  , 215 , 95  , 85  , 142 , 215 } ,
     {"SeaGreen3"          , 78  , 95  , 215 , 135 , 99  , 142 , 215 } ,
     {"Aquamarine3"        , 79  , 95  , 215 , 175 , 113 , 142 , 215 } ,
     {"MediumTurquoise"    , 80  , 95  , 215 , 215 , 128 , 142 , 215 } ,
     {"SteelBlue1Bis"      , 81  , 95  , 215 , 255 , 139 , 160 , 255 } ,
     {"Chartreuse2Bis"     , 82  , 95  , 255 , 0   , 69  , 255 , 255 } ,
     {"SeaGreen2"          , 83  , 95  , 255 , 95  , 85  , 160 , 255 } ,
     {"SeaGreen1"          , 84  , 95  , 255 , 135 , 95  , 160 , 255 } ,
     {"SeaGreen1Bis"       , 85  , 95  , 255 , 175 , 106 , 160 , 255 } ,
     {"Aquamarine1Bis"     , 86  , 95  , 255 , 215 , 117 , 160 , 255 } ,
     {"DarkSlateGray2"     , 87  , 95  , 255 , 255 , 128 , 160 , 255 } ,
     {"DarkRedBis"         , 88  , 135 , 0   , 0   , 0   , 255 , 135 } ,
     {"DeepPink4Bis"       , 89  , 135 , 0   , 95  , 226 , 255 , 135 } ,
     {"DarkMagenta"        , 90  , 135 , 0   , 135 , 213 , 255 , 135 } ,
     {"DarkMagentaBis"     , 91  , 135 , 0   , 175 , 204 , 255 , 175 } ,
     {"DarkVioletBis"      , 92  , 135 , 0   , 215 , 198 , 255 , 215 } ,
     {"PurpleBis"          , 93  , 135 , 0   , 255 , 193 , 255 , 255 } ,
     {"Orange4Bis"         , 94  , 135 , 95  , 0   , 30  , 255 , 135 } ,
     {"LightPink4"         , 95  , 135 , 95  , 95  , 0   , 75  , 135 } ,
     {"Plum4"              , 96  , 135 , 95  , 135 , 213 , 75  , 135 } ,
     {"MediumPurple3"      , 97  , 135 , 95  , 175 , 192 , 116 , 175 } ,
     {"MediumPurple3Bis"   , 98  , 135 , 95  , 215 , 185 , 142 , 215 } ,
     {"SlateBlue1"         , 99  , 135 , 95  , 255 , 181 , 160 , 255 } ,
     {"Yellow4"            , 100 , 135 , 135 , 0   , 43  , 255 , 135 } ,
     {"Wheat4"             , 101 , 135 , 135 , 95  , 43  , 75  , 135 } ,
     {"Grey53"             , 102 , 135 , 135 , 135 , 0   , 0   , 135 } ,
     {"LightSlateGrey"     , 103 , 135 , 135 , 175 , 171 , 58  , 175 } ,
     {"MediumPurple"       , 104 , 135 , 135 , 215 , 171 , 94  , 215 } ,
     {"LightSlateBlue"     , 105 , 135 , 135 , 255 , 171 , 120 , 255 } ,
     {"Yellow4Bis"         , 106 , 135 , 175 , 0   , 52  , 255 , 175 } ,
     {"DarkOliveGreen3"    , 107 , 135 , 175 , 95  , 64  , 116 , 175 } ,
     {"DarkSeaGreen"       , 108 , 135 , 175 , 135 , 85  , 58  , 175 } ,
     {"LightSkyBlue3"      , 109 , 135 , 175 , 175 , 128 , 58  , 175 } ,
     {"LightSkyBlue3Bis"   , 110 , 135 , 175 , 215 , 150 , 94  , 215 } ,
     {"SkyBlue2"           , 111 , 135 , 175 , 255 , 157 , 120 , 255 } ,
     {"Chartreuse2"        , 112 , 135 , 215 , 0   , 58  , 255 , 215 } ,
     {"DarkOliveGreen3Bis" , 113 , 135 , 215 , 95  , 71  , 142 , 215 } ,
     {"PaleGreen3"         , 114 , 135 , 215 , 135 , 85  , 94  , 215 } ,
     {"DarkSeaGreen3"      , 115 , 135 , 215 , 175 , 106 , 94  , 215 } ,
     {"DarkSlateGray3"     , 116 , 135 , 215 , 215 , 128 , 94  , 215 } ,
     {"SkyBlue1"           , 117 , 135 , 215 , 255 , 143 , 120 , 255 } ,
     {"Chartreuse1"        , 118 , 135 , 255 , 0   , 63  , 255 , 255 } ,
     {"LightGreen"         , 119 , 135 , 255 , 95  , 75  , 160 , 255 } ,
     {"LightGreenBis"      , 120 , 135 , 255 , 135 , 85  , 120 , 255 } ,
     {"PaleGreen1"         , 121 , 135 , 255 , 175 , 99  , 120 , 255 } ,
     {"Aquamarine1"        , 122 , 135 , 255 , 215 , 113 , 120 , 255 } ,
     {"DarkSlateGray1"     , 123 , 135 , 255 , 255 , 128 , 120 , 255 } ,
     {"Red3"               , 124 , 175 , 0   , 0   , 0   , 255 , 175 } ,
     {"DeepPink4"          , 125 , 175 , 0   , 95  , 233 , 255 , 175 } ,
     {"MediumVioletRed"    , 126 , 175 , 0   , 135 , 223 , 255 , 175 } ,
     {"Magenta3"           , 127 , 175 , 0   , 175 , 213 , 255 , 175 } ,
     {"DarkViolet"         , 128 , 175 , 0   , 215 , 206 , 255 , 215 } ,
     {"Purple"             , 129 , 175 , 0   , 255 , 200 , 255 , 255 } ,
     {"DarkOrange3"        , 130 , 175 , 95  , 0   , 23  , 255 , 175 } ,
     {"IndianRed"          , 131 , 175 , 95  , 95  , 0   , 116 , 175 } ,
     {"HotPink3"           , 132 , 175 , 95  , 135 , 235 , 116 , 175 } ,
     {"MediumOrchid3"      , 133 , 175 , 95  , 175 , 213 , 116 , 175 } ,
     {"MediumOrchid"       , 134 , 175 , 95  , 215 , 199 , 142 , 215 } ,
     {"MediumPurple2"      , 135 , 175 , 95  , 255 , 192 , 160 , 255 } ,
     {"DarkGoldenrod"      , 136 , 175 , 135 , 0   , 33  , 255 , 175 } ,
     {"LightSalmon3"       , 137 , 175 , 135 , 95  , 21  , 116 , 175 } ,
     {"RosyBrown"          , 138 , 175 , 135 , 135 , 0   , 58  , 175 } ,
     {"Grey63"             , 139 , 175 , 135 , 175 , 213 , 58  , 175 } ,
     {"MediumPurple2Bis"   , 140 , 175 , 135 , 215 , 192 , 94  , 215 } ,
     {"MediumPurple1"      , 141 , 175 , 135 , 255 , 185 , 120 , 255 } ,
     {"Gold3"              , 142 , 175 , 175 , 0   , 43  , 255 , 175 } ,
     {"DarkKhaki"          , 143 , 175 , 175 , 95  , 43  , 116 , 175 } ,
     {"NavajoWhite3"       , 144 , 175 , 175 , 135 , 43  , 58  , 175 } ,
     {"Grey69"             , 145 , 175 , 175 , 175 , 0   , 0   , 175 } ,
     {"LightSteelBlue3"    , 146 , 175 , 175 , 215 , 171 , 47  , 215 } ,
     {"LightSteelBlue"     , 147 , 175 , 175 , 255 , 171 , 80  , 255 } ,
     {"Yellow3"            , 148 , 175 , 215 , 0   , 50  , 255 , 215 } ,
     {"DarkOliveGreen3Ter" , 149 , 175 , 215 , 95  , 57  , 142 , 215 } ,
     {"DarkSeaGreen3Bis"   , 150 , 175 , 215 , 135 , 64  , 94  , 215 } ,
     {"DarkSeaGreen2"      , 151 , 175 , 215 , 175 , 85  , 47  , 215 } ,
     {"LightCyan3"         , 152 , 175 , 215 , 215 , 128 , 47  , 215 } ,
     {"LightSkyBlue1"      , 153 , 175 , 215 , 255 , 150 , 80  , 255 } ,
     {"GreenYellow"        , 154 , 175 , 255 , 0   , 56  , 255 , 255 } ,
     {"DarkOliveGreen2"    , 155 , 175 , 255 , 95  , 64  , 160 , 255 } ,
     {"PaleGreen1Bis"      , 156 , 175 , 255 , 135 , 71  , 120 , 255 } ,
     {"DarkSeaGreen2Bis"   , 157 , 175 , 255 , 175 , 85  , 80  , 255 } ,
     {"DarkSeaGreen1"      , 158 , 175 , 255 , 215 , 106 , 80  , 255 } ,
     {"PaleTurquoise1"     , 159 , 175 , 255 , 255 , 128 , 80  , 255 } ,
     {"Red3Bis"            , 160 , 215 , 0   , 0   , 0   , 255 , 215 } ,
     {"DeepPink3"          , 161 , 215 , 0   , 95  , 237 , 255 , 215 } ,
     {"DeepPink3Bis"       , 162 , 215 , 0   , 135 , 229 , 255 , 215 } ,
     {"Magenta3Bis"        , 163 , 215 , 0   , 175 , 221 , 255 , 215 } ,
     {"Magenta3Ter"        , 164 , 215 , 0   , 215 , 213 , 255 , 215 } ,
     {"Magenta2"           , 165 , 215 , 0   , 255 , 207 , 255 , 255 } ,
     {"DarkOrange3Bis"     , 166 , 215 , 95  , 0   , 19  , 255 , 215 } ,
     {"IndianRedBis"       , 167 , 215 , 95  , 95  , 0   , 142 , 215 } ,
     {"HotPink3Bis"        , 168 , 215 , 95  , 135 , 242 , 142 , 215 } ,
     {"HotPink2"           , 169 , 215 , 95  , 175 , 228 , 142 , 215 } ,
     {"Orchid"             , 170 , 215 , 95  , 215 , 213 , 142 , 215 } ,
     {"MediumOrchid1"      , 171 , 215 , 95  , 255 , 203 , 160 , 255 } ,
     {"Orange3"            , 172 , 215 , 135 , 0   , 27  , 255 , 215 } ,
     {"LightSalmon3"       , 173 , 215 , 135 , 95  , 14  , 142 , 215 } ,
     {"LightPink3"         , 174 , 215 , 135 , 135 , 0   , 94  , 215 } ,
     {"Pink3"              , 175 , 215 , 135 , 175 , 235 , 94  , 215 } ,
     {"Plum3"              , 176 , 215 , 135 , 215 , 213 , 94  , 215 } ,
     {"Violet"             , 177 , 215 , 135 , 255 , 199 , 120 , 255 } ,
     {"Gold3Bis"           , 178 , 215 , 175 , 0   , 35  , 255 , 215 } ,
     {"LightGoldenrod3"    , 179 , 215 , 175 , 95  , 28  , 142 , 215 } ,
     {"Tan"                , 180 , 215 , 175 , 135 , 21  , 94  , 215 } ,
     {"MistyRose3"         , 181 , 215 , 175 , 175 , 0   , 47  , 215 } ,
     {"Thistle3"           , 182 , 215 , 175 , 215 , 213 , 47  , 215 } ,
     {"Plum2"              , 183 , 215 , 175 , 255 , 192 , 80  , 255 } ,
     {"Yellow3Bis"         , 184 , 215 , 215 , 0   , 43  , 255 , 215 } ,
     {"Khaki3"             , 185 , 215 , 215 , 95  , 43  , 142 , 215 } ,
     {"LightGoldenrod2"    , 186 , 215 , 215 , 135 , 43  , 94  , 215 } ,
     {"LightYellow3"       , 187 , 215 , 215 , 175 , 43  , 47  , 215 } ,
     {"Grey84"             , 188 , 215 , 215 , 215 , 0   , 0   , 215 } ,
     {"LightSteelBlue1"    , 189 , 215 , 215 , 255 , 171 , 40  , 255 } ,
     {"Yellow2"            , 190 , 215 , 255 , 0   , 49  , 255 , 255 } ,
     {"DarkOliveGreen1"    , 191 , 215 , 255 , 95  , 53  , 160 , 255 } ,
     {"DarkOliveGreen1Bis" , 192 , 215 , 255 , 135 , 57  , 120 , 255 } ,
     {"DarkSeaGreen1Bis"   , 193 , 215 , 255 , 175 , 64  , 80  , 255 } ,
     {"Honeydew2"          , 194 , 215 , 255 , 215 , 85  , 40  , 255 } ,
     {"LightCyan1Bis"      , 195 , 215 , 255 , 255 , 128 , 40  , 255 } ,
     {"Red1"               , 196 , 255 , 0   , 0   , 0   , 255 , 255 } ,
     {"DeepPink2"          , 197 , 255 , 0   , 95  , 240 , 255 , 255 } ,
     {"DeepPink1"          , 198 , 255 , 0   , 135 , 234 , 255 , 255 } ,
     {"DeepPink1Bis"       , 199 , 255 , 0   , 175 , 227 , 255 , 255 } ,
     {"Magenta2Bis"        , 200 , 255 , 0   , 215 , 220 , 255 , 255 } ,
     {"Magenta1"           , 201 , 255 , 0   , 255 , 213 , 255 , 255 } ,
     {"OrangeRed1"         , 202 , 255 , 95  , 0   , 16  , 255 , 255 } ,
     {"IndianRed1"         , 203 , 255 , 95  , 95  , 0   , 160 , 255 } ,
     {"IndianRed1Bis"      , 204 , 255 , 95  , 135 , 246 , 160 , 255 } ,
     {"HotPink"            , 205 , 255 , 95  , 175 , 235 , 160 , 255 } ,
     {"HotPinkBis"         , 206 , 255 , 95  , 215 , 224 , 160 , 255 } ,
     {"MediumOrchid1Bis"   , 207 , 255 , 95  , 255 , 213 , 160 , 255 } ,
     {"DarkOrange"         , 208 , 255 , 135 , 0   , 22  , 255 , 255 } ,
     {"Salmon1"            , 209 , 255 , 135 , 95  , 10  , 160 , 255 } ,
     {"LightCoral"         , 210 , 255 , 135 , 135 , 0   , 120 , 255 } ,
     {"PaleVioletRed1"     , 211 , 255 , 135 , 175 , 242 , 120 , 255 } ,
     {"Orchid2"            , 212 , 255 , 135 , 215 , 228 , 120 , 255 } ,
     {"Orchid1"            , 213 , 255 , 135 , 255 , 213 , 120 , 255 } ,
     {"Orange1"            , 214 , 255 , 175 , 0   , 29  , 255 , 255 } ,
     {"SandyBrown"         , 215 , 255 , 175 , 95  , 21  , 160 , 255 } ,
     {"LightSalmon1"       , 216 , 255 , 175 , 135 , 14  , 120 , 255 } ,
     {"LightPink1"         , 217 , 255 , 175 , 175 , 0   , 80  , 255 } ,
     {"Pink1"              , 218 , 255 , 175 , 215 , 235 , 80  , 255 } ,
     {"Plum1"              , 219 , 255 , 175 , 255 , 213 , 80  , 255 } ,
     {"Gold1"              , 220 , 255 , 215 , 0   , 36  , 255 , 255 } ,
     {"LightGoldenrod2Bis" , 221 , 255 , 215 , 95  , 32  , 160 , 255 } ,
     {"LightGoldenrod2Ter" , 222 , 255 , 215 , 135 , 28  , 120 , 255 } ,
     {"NavajoWhite1"       , 223 , 255 , 215 , 175 , 21  , 80  , 255 } ,
     {"MistyRose1"         , 224 , 255 , 215 , 215 , 0   , 40  , 255 } ,
     {"Thistle1"           , 225 , 255 , 215 , 255 , 213 , 40  , 255 } ,
     {"Yellow1"            , 226 , 255 , 255 , 0   , 43  , 255 , 255 } ,
     {"LightGoldenrod1"    , 227 , 255 , 255 , 95  , 43  , 160 , 255 } ,
     {"Khaki1"             , 228 , 255 , 255 , 135 , 43  , 120 , 255 } ,
     {"Wheat1"             , 229 , 255 , 255 , 175 , 43  , 80  , 255 } ,
     {"Cornsilk1"          , 230 , 255 , 255 , 215 , 43  , 40  , 255 } ,
     {"Grey100"            , 231 , 255 , 255 , 255 , 0   , 0   , 255 } ,
     {"Grey3"              , 232 , 8   , 8   , 8   , 0   , 0   , 8   } ,
     {"Grey7"              , 233 , 18  , 18  , 18  , 0   , 0   , 18  } ,
     {"Grey11"             , 234 , 28  , 28  , 28  , 0   , 0   , 28  } ,
     {"Grey15"             , 235 , 38  , 38  , 38  , 0   , 0   , 38  } ,
     {"Grey19"             , 236 , 48  , 48  , 48  , 0   , 0   , 48  } ,
     {"Grey23"             , 237 , 58  , 58  , 58  , 0   , 0   , 58  } ,
     {"Grey27"             , 238 , 68  , 68  , 68  , 0   , 0   , 68  } ,
     {"Grey30"             , 239 , 78  , 78  , 78  , 0   , 0   , 78  } ,
     {"Grey35"             , 240 , 88  , 88  , 88  , 0   , 0   , 88  } ,
     {"Grey39"             , 241 , 98  , 98  , 98  , 0   , 0   , 98  } ,
     {"Grey42"             , 242 , 108 , 108 , 108 , 0   , 0   , 108 } ,
     {"Grey46"             , 243 , 118 , 118 , 118 , 0   , 0   , 118 } ,
     {"Grey50"             , 244 , 128 , 128 , 128 , 0   , 0   , 128 } ,
     {"Grey54"             , 245 , 138 , 138 , 138 , 0   , 0   , 138 } ,
     {"Grey58"             , 246 , 148 , 148 , 148 , 0   , 0   , 148 } ,
     {"Grey62"             , 247 , 158 , 158 , 158 , 0   , 0   , 158 } ,
     {"Grey66"             , 248 , 168 , 168 , 168 , 0   , 0   , 168 } ,
     {"Grey70"             , 249 , 178 , 178 , 178 , 0   , 0   , 178 } ,
     {"Grey74"             , 250 , 188 , 188 , 188 , 0   , 0   , 188 } ,
     {"Grey78"             , 251 , 198 , 198 , 198 , 0   , 0   , 198 } ,
     {"Grey82"             , 252 , 208 , 208 , 208 , 0   , 0   , 208 } ,
     {"Grey85"             , 253 , 218 , 218 , 218 , 0   , 0   , 218 } ,
     {"Grey89"             , 254 , 228 , 228 , 228 , 0   , 0   , 228 } ,
     {"Grey93"             , 255 , 238 , 238 , 238 , 0   , 0   , 238 } ,
                                                                     } ;

ColorInfo GetColorInfo(Color::Palette256 index) {
  return palette256[int(index)];
}
// clang-format off

}

// Copyright 2020 Arthur Sonzogni. All rights reserved.
// Use of this source code is governed by the MIT license that can be found in
// the LICENSE file.
