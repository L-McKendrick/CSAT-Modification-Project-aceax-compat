class BackpackCamoBase : CamoBase
{
	class HEX; class ARD : HEX { label = "Arid"; };
	class TAN; class SMARD : TAN { label = "Semiarid"; };
	class UHEX; class URB : UHEX { label = "Urban"; };
	class GHEX; class WDL : GHEX { label = "Woodland"; };

	values[] = { "ARD", "SMARD", "URB", "WDL" };
};

class TEC_B_AssaultPack
{
	label = "CSAT Assault Pack";
	options[] = { "camo" };
	class camo : BackpackCamoBase {};
};

class TEC_B_Bergen
{
	label = "CSAT Bergen";
	options[] = { "camo" };
	class camo : BackpackCamoBase {};
};

class TEC_B_Carryall
{
	label = "CSAT Carryall";
	options[] = { "camo" };
	class camo : BackpackCamoBase {};
};

class TEC_B_Fieldpack
{
	label = "CSAT Field Pack";
	options[] = { "camo" };
	class camo : BackpackCamoBase {};
};

class TEC_B_heavy
{
	label = "CSAT Heavy Bag";
	options[] = { "camo" };
	class camo : BackpackCamoBase {};
};

class TEC_B_Kitbag
{
	label = "CSAT Kitbag";
	options[] = { "camo" };
	class camo : BackpackCamoBase {};
};

class TEC_B_Operations
{
	label = "CSAT Operations Bag";
	options[] = { "camo" };
	class camo : BackpackCamoBase {};
};

class TEC_B_Medium
{
	label = "CSAT Patrol Bag";
	options[] = { "camo" };
	class camo : BackpackCamoBase {};
};

class TEC_B_medium_Radio
{
	label = "CSAT Radio Bag";
	options[] = { "camo" };
	class camo : BackpackCamoBase {};
};

class TEC_B_O_Static_Designator
{
	label = "CSAT Remote Designator";
	options[] = { "camo" };
	class camo : BackpackCamoBase {};
};

class TEC_Static_Vorona
{
	label = "CSAT Static Vorona";
	options[] = { "camo" };
	class camo : BackpackCamoBase
	{
		values[] = { "ARD", "WDL" };
	};
}

class TEC_B_O_UAV
{
	label = "CSAT UAV Bag";
	options[] = { "camo" };
	class camo : BackpackCamoBase {};
};

class TEC_B_O_UAV_AL6
{
	label = "CSAT UAV Bag (AL-6)";
	options[] = { "camo" };
	class camo : BackpackCamoBase {};
};

class TEC_B_O_UAV_AL6_Antimine
{
	label = "CSAT UAV Bag (AL-6, Demining)";
	options[] = { "camo" };
	class camo : BackpackCamoBase {};
};

class TEC_B_O_UAV_AL6_Medical
{
	label = "CSAT UAV Bag (AL-6, Medical)";
	options[] = { "camo" };
	class camo : BackpackCamoBase {};
};

class TEC_GMG_Weapon_Auto
{
	label = "Autonomous GMG";
	options[] = { "camo" };
	class camo : BackpackCamoBase
	{
		values[] = { "ARD", "WDL" };
	};
};

class TEC_GMG_Weapon
{
	label = "Mk32 GMG";
	options[] = { "camo" };
	class camo : BackpackCamoBase
	{
		values[] = { "ARD", "WDL" };
	};
	class position
	{
		values[] = { "Low", "Raised" };
	};
};

class TEC_HMG_Weapon_Auto
{
	label = "Autonomous MG";
	options[] = { "camo" };
	class camo : BackpackCamoBase
	{
		values[] = { "ARD", "WDL" };
	};
};

class TEC_HMG_Weapon
{
	label = "Mk30 HMG";
	options[] = { "camo" };
	class camo : BackpackCamoBase
	{
		values[] = { "ARD", "WDL" };
	};
	class position
	{
		values[] = { "Low", "Raised" };
	};
};

class TEC_HMG_Weapon_High
{
	label = "Folded Tripod";
	options[] = { "camo" };
	class camo : BackpackCamoBase
	{
		values[] = { "ARD", "WDL" };
	};
	class position
	{
		values[] = { "Low", "Raised" };
	};
};

class TEC_Mortar_01_Bipod
{
	label = "Mk6 Mortar Bipod";
	options[] = { "camo" };
	class camo : BackpackCamoBase
	{
		values[] = { "ARD", "WDL" };
	};
};

class TEC_Mortar_01_Tube
{
	label = "Mk6 Mortar Tube";
	options[] = { "camo" };
	class camo : BackpackCamoBase
	{
		values[] = { "ARD", "WDL" };
	};
};

class TEC_Static_Bipod
{
	label = "Folded Tripod";
	options[] = { "camo" };
	class camo : BackpackCamoBase
	{
		values[] = { "ARD", "WDL" };
	};
};

class TEC_Static_AA
{
	label = "Titan Launcher (AA)";
	options[] = { "camo" };
	class camo : BackpackCamoBase
	{
		values[] = { "ARD", "WDL" };
	};
};

class TEC_Static_AT
{
	label = "Titan Launcher (AT)";
	options[] = { "camo" };
	class camo : BackpackCamoBase
	{
		values[] = { "ARD", "WDL" };
	};
};
