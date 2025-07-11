	class UCamoBase : CamoBase
	{
		class HEX;	class ARD : HEX { label = "Arid"; };
		class KHK;	class SMARD : KHK { label = "Semiarid"; };
		class UHEX;	class URB : UHEX { label = "Urban"; };
		class GHEX;	class WDL : GHEX { label = "Woodland"; };

		values[] = { "ARD", "NAV", "SMARD", "URB", "WDL" };
	};


class TEC_U_O
{
	label = "CSAT Fatigues";
	options[] = { "camo", "sleeves" };

	class camo : UCamoBase {};

	class sleeves : SleevesBase
	{
		values[] = { "Full", "Half" };
	};
};

class TEC_U_O_SOF
{
	label = "CSAT Fatigues (SOF)";
	options[] = { "camo", "sleeves" };

	class camo : UCamoBase { values[] = { "ARD", "WDL"}; };

	class sleeves : SleevesBase
	{
		values[] = { "Full", "Half" };
	};
};

class TEC_U_O_GhillieSuit
{
	label = "CSAT Ghillie Suit";
	options[] = { "camo" };

	class camo : UCamoBase { values[] = { "ARD", "WDL"}; };
};

class TEC_U_O_CBRN
{
	label = "CSAT MOPP Suit";
	options[] = { "camo" };

	class camo : UCamoBase { values[] = { "ARD", "WDL"}; };
};

class TEC_U_O_Viper
{
	label = "CSAT Viper Fatigues";
	options[] = { "camo" };

	class camo : UCamoBase { values[] = { "ARD", "WDL"}; };
};

class TEC_U_O_Viper_Ghillie
{
	label = "CSAT Viper Ghilliesuit";
	options[] = { "camo" };

	class camo : UCamoBase { values[] = { "ARD", "WDL"}; };
};

class TEC_U_O_Helicopter
{
	label = "CSAT Flightsuit (Helicopter)";
	options[] = { "camo" };

	class camo : CamoBase
	{
		values[] = { "CBR", "NAV" };
	};
};

class TEC_U_O_GhillieSuit_Full
{
	label = "CSAT Full Ghillie Suit";
	options[] = { "camo" };

	class camo : CamoBase
	{
		class HEX;
		class ARD : HEX { label = "Arid"; };

		class GHEX;
		class JNG : GHEX { label = "Jungle"; };

		class OLI;
		class LSH : OLI { label = "Lush"; };

		class KHK;
		class SMARD : KHK { label = "Semiarid"; };

		values[] = { "ARD", "JNG", "LSH", "SMARD" };
	};
};

class TEC_U_O_Coveralls
{
	label = "CSAT Vehicle Coveralls";
	options[] = { "camo" };

	class camo : UCamoBase {};
};
