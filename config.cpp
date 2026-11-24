class CfgPatches
{
    class PlayerBase
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"DZ_Data", "DZ_Scripts", "DZ_Gear_Consumables"};
    };
};

class CfgMods
{
    class PlayerBase
    {
        dir="InventoryWaterOn";
        picture="";
        action="";
        hideName=0;
        hidePicture=1;
        name="InventoryWaterOn";
        credits="HF";
        author="HF";
        authorID="0";
        version="1.0";
        extra=0;
        type="mod";
        dependencies[]=
        {
            "World"
        };
        class defs
        {
            class worldScriptModule
            {
                value="";
                files[]=
                {
                    "zhfbrpack/InventoryWaterOn/scripts/4_World"
                };
            };
			
        };
    };
};
