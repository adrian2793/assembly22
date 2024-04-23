# Advanced Game Control for Counterstrike

> [!NOTE]
> For educational purposes only

> [!WARNING]
> To use this program you need to have a native USB compatible Arduino

> [!TIP]
> There's no chance of getting banned when using it correctly

**Features**

- Recoil Control System

## Get Started

1. Download and extract the code
2. Open `sketch.ino` in your editor
3. Upload the program to the Arduino

> [!TIP]
> Once the code is uploaded the Arduino can be connected to any supported device

## Config

```ino
set(int id, String value)
```

> [!NOTE]
> Once the Arduino is turned off the default configuration will be restored

With the code snippet above the following variables can be changed

| id | variable |
| --- | --- |
| `0` | `weapon_ammo` |
| `1` | `aim_x` |
| `2` | `aim_y` |
| `3` | `aim_wheel` |

`weapon_ammo`

> [!TIP]
> Set this parameter to the ammo of the current weapon

`aim_x`

> [!TIP]
> This parameters uses predictions and shouldn't be changed manually

`aim_y`

> [!TIP]
> As above this parameter uses predictions too and shouldn't be changed

`aim_wheel`

I don't know what's this for
