NewBirchLab_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NewBirchLab_EventScript_BallDefault
	.byte 0


NewBirchLab_EventScript_BallDefault::
	setvar VAR_UNUSED_0x40F7, 0
	return


NewBirchLab_EventScript_Birch::
	lockall
	faceplayer
	goto_if_unset FLAG_UNUSED_0x493, NewBirchLab_EventScript_Birch_4
NewBirchLab_EventScript_Birch_3:
	msgbox NewBirchLab_EventScript_Birch_Text_3
NewBirchLab_EventScript_Birch_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_Birch_2:
	msgbox NewBirchLab_EventScript_Birch_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Birch_9
	msgbox NewBirchLab_EventScript_Birch_Text_2
	goto NewBirchLab_EventScript_Birch_1

NewBirchLab_EventScript_Birch_4:
	goto_if_unset FLAG_UNUSED_0x494, NewBirchLab_EventScript_Birch_6
	goto NewBirchLab_EventScript_Birch_3

NewBirchLab_EventScript_Birch_6:
	goto_if_unset FLAG_UNUSED_0x495, NewBirchLab_EventScript_Birch_2
	goto NewBirchLab_EventScript_Birch_3

NewBirchLab_EventScript_Birch_9:
	compare VAR_UNUSED_0x40F7, 2
	goto_if_ne NewBirchLab_EventScript_Birch_13
	setvar VAR_UNUSED_0x40F7, 0
NewBirchLab_EventScript_Birch_12:
	msgbox NewBirchLab_EventScript_Birch_Text_1
	goto NewBirchLab_EventScript_Birch_1

NewBirchLab_EventScript_Birch_13:
	addvar VAR_UNUSED_0x40F7, 1
	goto NewBirchLab_EventScript_Birch_12


NewBirchLab_EventScript_PokeballOne::
	lockall
	goto_if_unset FLAG_UNUSED_0x493, NewBirchLab_EventScript_PokeballOne_4
NewBirchLab_EventScript_PokeballOne_3:
	msgbox NewBirchLab_EventScript_PokeballOne_Text_0
NewBirchLab_EventScript_PokeballOne_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_PokeballOne_2:
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewBirchLab_EventScript_PokeballOne_9
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewBirchLab_EventScript_PokeballOne_10
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewBirchLab_EventScript_PokeballOne_11
	goto NewBirchLab_EventScript_PokeballOne_1

NewBirchLab_EventScript_PokeballOne_4:
	goto_if_unset FLAG_UNUSED_0x494, NewBirchLab_EventScript_PokeballOne_6
	goto NewBirchLab_EventScript_PokeballOne_3

NewBirchLab_EventScript_PokeballOne_6:
	goto_if_unset FLAG_UNUSED_0x495, NewBirchLab_EventScript_PokeballOne_2
	goto NewBirchLab_EventScript_PokeballOne_3

NewBirchLab_EventScript_PokeballOne_9:
	call NewBirchLab_EventScript_Mudkip
	goto NewBirchLab_EventScript_PokeballOne_1

NewBirchLab_EventScript_PokeballOne_10:
	call NewBirchLab_EventScript_Totodile
	goto NewBirchLab_EventScript_PokeballOne_1

NewBirchLab_EventScript_PokeballOne_11:
	call NewBirchLab_EventScript_Squirtle
	goto NewBirchLab_EventScript_PokeballOne_1


NewBirchLab_EventScript_PokeballTwo::
	lockall
	goto_if_unset FLAG_UNUSED_0x493, NewBirchLab_EventScript_PokeballTwo_4
NewBirchLab_EventScript_PokeballTwo_3:
	msgbox NewBirchLab_EventScript_PokeballOne_Text_0
NewBirchLab_EventScript_PokeballTwo_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_PokeballTwo_2:
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewBirchLab_EventScript_PokeballTwo_9
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewBirchLab_EventScript_PokeballTwo_10
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewBirchLab_EventScript_PokeballTwo_11
	goto NewBirchLab_EventScript_PokeballTwo_1

NewBirchLab_EventScript_PokeballTwo_4:
	goto_if_unset FLAG_UNUSED_0x494, NewBirchLab_EventScript_PokeballTwo_6
	goto NewBirchLab_EventScript_PokeballTwo_3

NewBirchLab_EventScript_PokeballTwo_6:
	goto_if_unset FLAG_UNUSED_0x495, NewBirchLab_EventScript_PokeballTwo_2
	goto NewBirchLab_EventScript_PokeballTwo_3

NewBirchLab_EventScript_PokeballTwo_9:
	call NewBirchLab_EventScript_Treecko
	goto NewBirchLab_EventScript_PokeballTwo_1

NewBirchLab_EventScript_PokeballTwo_10:
	call NewBirchLab_EventScript_Chikorita
	goto NewBirchLab_EventScript_PokeballTwo_1

NewBirchLab_EventScript_PokeballTwo_11:
	call NewBirchLab_EventScript_Bulbasaur
	goto NewBirchLab_EventScript_PokeballTwo_1


NewBirchLab_EventScript_PokeballThree::
	lockall
	goto_if_unset FLAG_UNUSED_0x493, NewBirchLab_EventScript_PokeballThree_4
NewBirchLab_EventScript_PokeballThree_3:
	msgbox NewBirchLab_EventScript_PokeballOne_Text_0
NewBirchLab_EventScript_PokeballThree_1:
	waitmessage
	releaseall
	end

NewBirchLab_EventScript_PokeballThree_2:
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewBirchLab_EventScript_PokeballThree_9
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewBirchLab_EventScript_PokeballThree_10
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewBirchLab_EventScript_PokeballThree_11
	goto NewBirchLab_EventScript_PokeballThree_1

NewBirchLab_EventScript_PokeballThree_4:
	goto_if_unset FLAG_UNUSED_0x494, NewBirchLab_EventScript_PokeballThree_6
	goto NewBirchLab_EventScript_PokeballThree_3

NewBirchLab_EventScript_PokeballThree_6:
	goto_if_unset FLAG_UNUSED_0x495, NewBirchLab_EventScript_PokeballThree_2
	goto NewBirchLab_EventScript_PokeballThree_3

NewBirchLab_EventScript_PokeballThree_9:
	call NewBirchLab_EventScript_Torchic
	goto NewBirchLab_EventScript_PokeballThree_1

NewBirchLab_EventScript_PokeballThree_10:
	call NewBirchLab_EventScript_Cyndaquil
	goto NewBirchLab_EventScript_PokeballThree_1

NewBirchLab_EventScript_PokeballThree_11:
	call NewBirchLab_EventScript_Charmander
	goto NewBirchLab_EventScript_PokeballThree_1


NewBirchLab_EventScript_Mudkip::
	showmonpic SPECIES_MUDKIP, 10, 3
	msgbox NewBirchLab_EventScript_Mudkip_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Mudkip_1
	hidemonpic
	msgbox NewProfessor_NotChosen
	return

NewBirchLab_EventScript_Mudkip_1:
	givemon SPECIES_MUDKIP, 5, ITEM_MYSTIC_WATER
	setflag FLAG_SYS_POKEMON_GET
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Mudkip_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Mudkip_5
	hidemonpic
	msgbox NewBirchLab_EventScript_Mudkip_Text_2
	return

NewBirchLab_EventScript_Mudkip_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Mudkip_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x493
	call NicknamePartyMon
	return

NewBirchLab_EventScript_Mudkip_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Mudkip_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x493
	call NicknameBoxMon
	return


NewBirchLab_EventScript_Totodile::
	showmonpic SPECIES_TOTODILE, 10, 3
	msgbox NewBirchLab_EventScript_Totodile_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Totodile_1
	hidemonpic
	msgbox NewProfessor_NotChosen
	return

NewBirchLab_EventScript_Totodile_1:
	givemon SPECIES_TOTODILE, 5, ITEM_MYSTIC_WATER
	setflag FLAG_SYS_POKEMON_GET
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Totodile_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Totodile_5
	hidemonpic
	msgbox NewBirchLab_EventScript_Mudkip_Text_2
	return

NewBirchLab_EventScript_Totodile_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Totodile_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x493
	call NicknamePartyMon
	return

NewBirchLab_EventScript_Totodile_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Totodile_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x493
	call NicknameBoxMon
	return


NewBirchLab_EventScript_Squirtle::
	showmonpic SPECIES_SQUIRTLE, 10, 3
	msgbox NewBirchLab_EventScript_Squirtle_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Squirtle_1
	hidemonpic
	msgbox NewProfessor_NotChosen
	return

NewBirchLab_EventScript_Squirtle_1:
	givemon SPECIES_SQUIRTLE, 5, ITEM_MYSTIC_WATER
	setflag FLAG_SYS_POKEMON_GET
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Squirtle_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Squirtle_5
	hidemonpic
	msgbox NewBirchLab_EventScript_Mudkip_Text_2
	return

NewBirchLab_EventScript_Squirtle_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Squirtle_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x493
	call NicknamePartyMon
	return

NewBirchLab_EventScript_Squirtle_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Squirtle_Text_1
	removeobject 1
	setflag FLAG_UNUSED_0x493
	call NicknameBoxMon
	return


NewBirchLab_EventScript_Treecko::
	showmonpic SPECIES_TREECKO, 10, 3
	msgbox NewBirchLab_EventScript_Treecko_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Treecko_1
	hidemonpic
	msgbox NewProfessor_NotChosen
	return

NewBirchLab_EventScript_Treecko_1:
	givemon SPECIES_TREECKO, 5, ITEM_MIRACLE_SEED
	setflag FLAG_SYS_POKEMON_GET
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Treecko_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Treecko_5
	hidemonpic
	msgbox NewBirchLab_EventScript_Mudkip_Text_2
	return

NewBirchLab_EventScript_Treecko_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Treecko_Text_1
	removeobject 2
	setflag FLAG_UNUSED_0x494
	call NicknamePartyMon
	return

NewBirchLab_EventScript_Treecko_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Treecko_Text_1
	removeobject 2
	setflag FLAG_UNUSED_0x494
	call NicknameBoxMon
	return


NewBirchLab_EventScript_Chikorita::
	showmonpic SPECIES_CHIKORITA, 10, 3
	msgbox NewBirchLab_EventScript_Chikorita_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Chikorita_1
	hidemonpic
	msgbox NewProfessor_NotChosen
	return

NewBirchLab_EventScript_Chikorita_1:
	givemon SPECIES_CHIKORITA, 5, ITEM_MIRACLE_SEED
	setflag FLAG_SYS_POKEMON_GET
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Chikorita_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Chikorita_5
	hidemonpic
	msgbox NewBirchLab_EventScript_Mudkip_Text_2
	return

NewBirchLab_EventScript_Chikorita_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Chikorita_Text_1
	removeobject 2
	setflag FLAG_UNUSED_0x494
	call NicknamePartyMon
	return

NewBirchLab_EventScript_Chikorita_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Chikorita_Text_1
	removeobject 2
	setflag FLAG_UNUSED_0x494
	call NicknameBoxMon
	return


NewBirchLab_EventScript_Bulbasaur::
	showmonpic SPECIES_BULBASAUR, 10, 3
	msgbox NewBirchLab_EventScript_Bulbasaur_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Bulbasaur_1
	hidemonpic
	msgbox NewProfessor_NotChosen
	return

NewBirchLab_EventScript_Bulbasaur_1:
	givemon SPECIES_BULBASAUR, 5, ITEM_MIRACLE_SEED
	setflag FLAG_SYS_POKEMON_GET
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Bulbasaur_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Bulbasaur_5
	hidemonpic
	msgbox NewBirchLab_EventScript_Mudkip_Text_2
	return

NewBirchLab_EventScript_Bulbasaur_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Bulbasaur_Text_1
	removeobject 2
	setflag FLAG_UNUSED_0x494
	call NicknamePartyMon
	return

NewBirchLab_EventScript_Bulbasaur_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Bulbasaur_Text_1
	removeobject 2
	setflag FLAG_UNUSED_0x494
	call NicknameBoxMon
	return


NewBirchLab_EventScript_Torchic::
	showmonpic SPECIES_TORCHIC, 10, 3
	msgbox NewBirchLab_EventScript_Torchic_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Torchic_1
	hidemonpic
	msgbox NewProfessor_NotChosen
	return

NewBirchLab_EventScript_Torchic_1:
	givemon SPECIES_TORCHIC, 5, ITEM_CHARCOAL
	setflag FLAG_SYS_POKEMON_GET
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Torchic_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Torchic_5
	hidemonpic
	msgbox NewBirchLab_EventScript_Mudkip_Text_2
	return

NewBirchLab_EventScript_Torchic_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Torchic_Text_1
	removeobject 3
	setflag FLAG_UNUSED_0x495
	call NicknamePartyMon
	return

NewBirchLab_EventScript_Torchic_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Torchic_Text_1
	removeobject 3
	setflag FLAG_UNUSED_0x495
	call NicknameBoxMon
	return


NewBirchLab_EventScript_Cyndaquil::
	showmonpic SPECIES_CYNDAQUIL, 10, 3
	msgbox NewBirchLab_EventScript_Cyndaquil_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Cyndaquil_1
	hidemonpic
	msgbox NewProfessor_NotChosen
	return

NewBirchLab_EventScript_Cyndaquil_1:
	givemon SPECIES_CYNDAQUIL, 5, ITEM_CHARCOAL
	setflag FLAG_SYS_POKEMON_GET
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Cyndaquil_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Cyndaquil_5
	hidemonpic
	msgbox NewBirchLab_EventScript_Mudkip_Text_2
	return

NewBirchLab_EventScript_Cyndaquil_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Cyndaquil_Text_1
	removeobject 3
	setflag FLAG_UNUSED_0x495
	call NicknamePartyMon
	return

NewBirchLab_EventScript_Cyndaquil_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Cyndaquil_Text_1
	removeobject 3
	setflag FLAG_UNUSED_0x495
	call NicknameBoxMon
	return


NewBirchLab_EventScript_Charmander::
	showmonpic SPECIES_CHARMANDER, 10, 3
	msgbox NewBirchLab_EventScript_Charmander_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewBirchLab_EventScript_Charmander_1
	hidemonpic
	msgbox NewProfessor_NotChosen
	return

NewBirchLab_EventScript_Charmander_1:
	givemon SPECIES_CHARMANDER, 5, ITEM_CHARCOAL
	setflag FLAG_SYS_POKEMON_GET
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewBirchLab_EventScript_Charmander_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewBirchLab_EventScript_Charmander_5
	hidemonpic
	msgbox NewBirchLab_EventScript_Mudkip_Text_2
	return

NewBirchLab_EventScript_Charmander_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Charmander_Text_1
	removeobject 3
	setflag FLAG_UNUSED_0x495
	call NicknamePartyMon
	return

NewBirchLab_EventScript_Charmander_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewBirchLab_EventScript_Charmander_Text_1
	removeobject 3
	setflag FLAG_UNUSED_0x495
	call NicknameBoxMon
	return


NicknamePartyMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


NewBirchLab_EventScript_Birch_Text_0:
	.string "Hello, would you like to see more?$"

NewBirchLab_EventScript_Birch_Text_1:
	.string "Choose your Pokemon wisely$"

NewBirchLab_EventScript_Birch_Text_2:
	.string "Choose your pokemon wisely$"

NewBirchLab_EventScript_Birch_Text_3:
	.string "Take care of your pokemon$"

NewBirchLab_EventScript_PokeballOne_Text_0:
	.string "Don't take another!$"

NewBirchLab_EventScript_Mudkip_Text_0:
	.string "Do you want to choose Mudkip?$"

NewBirchLab_EventScript_Mudkip_Text_1:
	.string "Received Mudkip!$"

NewBirchLab_EventScript_Mudkip_Text_2:
	.string "No more room$"

NewBirchLab_EventScript_Totodile_Text_0:
	.string "Do you want to choose Totodile?$"

NewBirchLab_EventScript_Totodile_Text_1:
	.string "Received Totodile!$"

NewBirchLab_EventScript_Squirtle_Text_0:
	.string "Do you want to choose Squirtle?$"

NewBirchLab_EventScript_Squirtle_Text_1:
	.string "Received Squirtle!$"

NewBirchLab_EventScript_Treecko_Text_0:
	.string "Do you want to choose Treecko?$"

NewBirchLab_EventScript_Treecko_Text_1:
	.string "Received Treecko!$"

NewBirchLab_EventScript_Chikorita_Text_0:
	.string "Do you want to choose Chikorita?$"

NewBirchLab_EventScript_Chikorita_Text_1:
	.string "Received Chikorita!$"

NewBirchLab_EventScript_Bulbasaur_Text_0:
	.string "Do you want to choose Bulbasaur?$"

NewBirchLab_EventScript_Bulbasaur_Text_1:
	.string "Received Bulbasaur!$"

NewBirchLab_EventScript_Torchic_Text_0:
	.string "Do you want to choose Torchic?$"

NewBirchLab_EventScript_Torchic_Text_1:
	.string "Received Torchic!$"

NewBirchLab_EventScript_Cyndaquil_Text_0:
	.string "Do you want to choose Cyndaquil?$"

NewBirchLab_EventScript_Cyndaquil_Text_1:
	.string "Received Cyndaquil!$"

NewBirchLab_EventScript_Charmander_Text_0:
	.string "Do you want to choose Charmander?$"

NewBirchLab_EventScript_Charmander_Text_1:
	.string "Received Charmander!$"

NicknamePartyMon_Text_0:
	.string "Give it a nickname?$"

NicknameBoxMon_Text_0:
	.string "Transferred to PC$"

NewProfessor_NotChosen::
	.string "You did not pick a pokemon$"
