class TEC_G
{
	label = "Tactical Eyepro";
	options[] = { "type", "camo", "shemag" };

	class type {
		label = "Type";
		changeInGame = 0;
		alwaysSelectable = 1;
		values[] = { "Goggle", "Glasses", "None" };
	}

	class camo : CamoBase
	{
		label = "Color";
		class TAN;		class ORN : TAN { label = "Orange"; };
		class BLACK;	class DRK : BLACK { label = "Dark"; };
		class WHT;		class CLR : WHT { label = "Clear"; };

		values[] = { "ORN", "DRK", "CLR", "None" };
	};

	class shemag
	{
		label = "Shemag";
		changeInGame = 0;
		alwaysSelectable = 1;
		values[] = { "No", "Yes" };
	};
};
