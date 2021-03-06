class CfgAmmo {
    class Default;
    class Grenadehand;
    
    class SmokeShell: GrenadeHand {
        model = "\A3\Weapons_f\ammo\smokegrenade_white";
        hit = 0; 
        indirectHit = 0;
        indirectHitRange = 0.2;
        dangerRadiusHit = -1;
        suppressionRadiusHit = -1;
        typicalspeed = 22;
        cost = 100;
        simulation = "shotSmokeX";
        explosive = 0;
        deflecting = 60;
        explosionTime = 2;
        timeToLive = 60;
        fuseDistance = 0;
        soundHit[] = {
            "",
            0,
            1
        };
        SmokeShellSoundHit1[] = {
            "A3\Sounds_F\weapons\smokeshell\smoke_1",
            1.2589254,
            1,
            100
        };
        SmokeShellSoundHit2[] = {
            "A3\Sounds_F\weapons\smokeshell\smoke_2",
            1.2589254,
            1,
            100
        };
        SmokeShellSoundHit3[] = {
            "A3\Sounds_F\weapons\smokeshell\smoke_3",
            1.2589254,
            1,
            100
        };
        SmokeShellSoundLoop1[] = {
            "A3\Sounds_F\weapons\smokeshell\smoke_loop1",
            0.12589253,
            1,
            70
        };
        SmokeShellSoundLoop2[] = {
            "A3\Sounds_F\weapons\smokeshell\smoke_loop2",
            0.12589253,
            1,
            70
        };
        grenadeFireSound[] = {
            "SmokeShellSoundHit1",
            0.25,
            "SmokeShellSoundHit2",
            0.25,
            "SmokeShellSoundHit3",
            0.5
        };
        grenadeBurningSound[] =    {
            "SmokeShellSoundLoop1",
            0.5,
            "SmokeShellSoundLoop2",
            0.5
        };
        aiAmmoUsageFlags = "4 + 2";
        smokeColor[] = {1, 1, 1, 1};
        effectsSmoke = "SmokeShellWhiteEffect";
        whistleDist = 0;
    };    
    class SmokeSignalRedAmmo: SmokeShell {
        model = "\A3\Weapons_f\ammo\smokegrenade_red";
        smokeColor[] = {0.84380001, 0.1383, 0.1353, 1};
        effectsSmoke = "SmokeSignalRedEffect";
    };
    class SmokeSignalGreenAmmo: SmokeShell {
        model = "\A3\Weapons_f\ammo\smokegrenade_green";
        smokeColor[] = {0.21250001, 0.62580001, 0.48909998, 1};
        effectsSmoke = "SmokeSignalGreenEffect";
    };
};
