class EquipmentBase
{
	label = "Equipment";
	changeInGame = 0;
	alwaysSelectable = 1;

	class BARE { label = "Bare"; };
	class COMM { label = "Commander"; };
	class EXPL { label = "Explosive"; };
	class GREN { label = "Grenadier"; };
	class GUNN { label = "Gunner"; };
	class HEAV { label = "Heavy"; };
	class LIGH { label = "Light"; };
	class MEDI { label = "Medic"; };
	class PATR { label = "Patrol"; };

	values[] = { "BARE", "COMM", "EXPL", "GREN", "GUNN", "HEAV", "LIGH", "MEDI", "PATR" };
};

class TEC_V_PC_New
{
	label = "AZAD-J OTV";
	options[] = { "equipment", "camo" };

	class equipment : EquipmentBase{};

	class camo : CamoBase
	{
		values[] = { "BLK", "CBR" };
	};
};

class TEC_V_Hamel_New
{
	label = "HAMEL-J Vest";
	options[] = { "equipment", "camo" };

	class equipment : EquipmentBase{};

	class camo : CamoBase
	{
		values[] = { "BLK", "CBR" };
	};
};

class TEC_V_Recon
{
	label = "ZASAN Recon Vest";
	options[] = { "equipment", "camo" };

	class equipment : EquipmentBase{};

	class camo : CamoBase
	{
		values[] = { "BLK", "CBR" };
	};
};

class TEC_V_TacVest
{
	label = "Aircrew Vest";
	options[] = { "camo", "role" };

	class camo
	{
		label = "Color";
		values[] = { "Brown", "Black" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};

	class role
	{
		label = "Role";
		values[] = { "Medical", "Fuel", "Mechanic", "Safety", "Operations", "Ordnance", "P. Handler", "P. Director" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};
};
