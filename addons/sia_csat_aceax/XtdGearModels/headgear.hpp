class HelmetCamoBase : CamoBase
{
	class HEX;	class ARD : HEX { label = "Arid"; };
	class KHK;	class SMARD : KHK { label = "Semiarid"; };
	class UHEX;	class URB : UHEX { label = "Urban"; };
	class GHEX;	class WDL : GHEX { label = "Woodland"; };

	values[] = { "ARD", "NAV", "SMARD", "URB", "WDL", "BLK" };

	alwaysSelectable = 1;
	changeInGame = 0;
};

class TEC_H_Raad
{
	label = "FCH Raad";
	options[] = { "camo", "variant" };

	class camo : HelmetCamoBase {};

	class variant
	{
		label = "Variant";
		values[] = { "Standard", "Stealth" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};
};

class TEC_H_Penah
{
	label = "FCH Penah";
	options[] = { "camo", "variant" };

	class camo : HelmetCamoBase {};

	class variant
	{
		label = "Variant";
		values[] = { "Standard", "Scrim", "Medic", "Mandible", "Goggles", "Tactical" };
	};
};

class TEC_H_MilCap
{
	label = "CSAT Cap";
	options[] = { "camo" };

	class camo : HelmetCamoBase {};
};

class TEC_H_Booniehat
{
	label = "CSAT Boonie";
	options[] = { "camo" };

	class camo : HelmetCamoBase {};
};

class TEC_H_BallCap
{
	label = "CSAT Baseball Cap";
	options[] = { "camo", "headphones" };

	class camo : HelmetCamoBase {};

	class headphones
	{
		label = "Headphones";
		values[] = { "No", "Yes" };
	};
};

class TEC_H_Beret
{
	label = "CSAT Beret";
	options[] = { "variant" };

	class variant
	{
		label = "Unit Type";
		values[] = { "SOF", "Navy", "Expeditionary", "Airborne" };
	};
};

