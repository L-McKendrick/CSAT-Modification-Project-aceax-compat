class CfgPatches
{
    class w28_aceax
    {
        author="McKendrick";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"aceax_gearinfo", "TEC_CSAT"};
        skipWhenMissingDependencies=0;
    };
};
class XtdGearModels
{
    //#include "XtdGearModels_Common.hpp"
    class CamoBase;
    class SleevesBase;

    class CfgWeapons
    {
        #include "XtdGearModels\vests.hpp"
        #include "XtdGearModels\uniforms.hpp"
        #include "XtdGearModels\headgear.hpp"
    };

    class CfgGlasses
    {
       #include "XtdGearModels\glasses.hpp"
    };
    
    class CfgVehicles
    {
        #include "XtdGearModels\backpacks.hpp"
    }
};

class XtdGearInfos
{
    class CfgWeapons
    {
        #include "XtdGearInfos\vests.hpp"
        #include "XtdGearInfos\uniforms.hpp"
        #include "XtdGearInfos\headgear.hpp"   
    };

    class CfgGlasses
    {
        #include "XtdGearInfos\glasses.hpp"
    };

    class CfgVehicles
    {
        #include "XtdGearInfos\backpacks.hpp"
    }
};
