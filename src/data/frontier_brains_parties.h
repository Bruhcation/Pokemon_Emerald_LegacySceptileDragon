static const struct TrainerMon sFrontierBrainParty_BattleTower[] =
{
    // Silver Symbol.
    {
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_BRIGHT_POWDER,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .ev = TRAINER_PARTY_EVS(6, 0, 0, 252, 252, 0),
        .moves = {MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_PSYCHIC},
    },
    {
        .species = SPECIES_MOLTRES,
        .heldItem = ITEM_CHARCOAL,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .ev = TRAINER_PARTY_EVS(6, 0, 0, 252, 252, 0),
        .moves = {MOVE_SUNNY_DAY, MOVE_FIRE_BLAST, MOVE_SOLAR_BEAM, MOVE_WILL_O_WISP},
    },
    {
        .species = SPECIES_SNORLAX,
        .heldItem = ITEM_CHOICE_BAND,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 6),
        .moves = {MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_ROCK_SLIDE, MOVE_DYNAMIC_PUNCH},
    },
    // Gold Symbol.
    {
        .species = SPECIES_RAIKOU,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .moves = {MOVE_ICE_BEAM, MOVE_LUSTER_PURGE, MOVE_RECOVER, MOVE_DRAGON_CLAW},
    },
    {
        .species = SPECIES_LATIOS,
        .heldItem = ITEM_BRIGHT_POWDER,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .ev = TRAINER_PARTY_EVS(6, 0, 0, 252, 252, 0),
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_RECOVER, MOVE_DRAGON_CLAW},
    },
    {
        .species = SPECIES_SNORLAX,
        .heldItem = ITEM_CHESTO_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 6, 0),
        .moves = {MOVE_CURSE, MOVE_RETURN, MOVE_REST, MOVE_EARTHQUAKE},
    },
};

static const struct TrainerMon sFrontierBrainParty_BattleDome[] =
{
    // Silver Symbol.
    {
        .species = SPECIES_SWAMPERT,
        .heldItem = ITEM_FOCUS_BAND,
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
        .ev = TRAINER_PARTY_EVS(152, 152, 106, 0, 100, 0),
        .moves = {MOVE_MUDDY_WATER, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_REFRESH},
    },
    {
        .species = SPECIES_SALAMENCE,
        .heldItem = ITEM_LUM_BERRY,
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .ev = TRAINER_PARTY_EVS(152, 152, 106, 100, 0, 0),
        .moves = {MOVE_EARTHQUAKE, MOVE_FIRE_BLAST, MOVE_DRAGON_CLAW, MOVE_HYDRO_PUMP},
    },
    {
        .species = SPECIES_TYPHLOSION,
        .heldItem = ITEM_WHITE_HERB,
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 6),
        .moves = {MOVE_ERUPTION, MOVE_REST, MOVE_SLEEP_TALK, MOVE_THUNDER_PUNCH},
    },
    // Gold Symbol.
    {
        .species = SPECIES_SWAMPERT,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
        .ev = TRAINER_PARTY_EVS(252, 252, 6, 0, 0, 0),
        .moves = {MOVE_MUDDY_WATER, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_MIRROR_COAT},
    },
    {
        .species = SPECIES_METAGROSS,
        .heldItem = ITEM_LUM_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
        .ev = TRAINER_PARTY_EVS(252, 252, 6, 0, 0, 0),
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_METEOR_MASH, MOVE_EARTHQUAKE, MOVE_AGILITY},
    },
    {
        .species = SPECIES_LATIAS,
        .heldItem = ITEM_CHESTO_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .ev = TRAINER_PARTY_EVS(6, 0, 0, 252, 252, 0),
        .moves = {MOVE_THUNDERBOLT, MOVE_MIST_BALL, MOVE_CALM_MIND, MOVE_REST},
    },
};

static const struct TrainerMon sFrontierBrainParty_BattlePalace[] =
{
    // Silver Symbol.
    {
        .species = SPECIES_LAPRAS,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(16, 16, 16, 16, 16, 16),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .ev = TRAINER_PARTY_EVS(152, 0, 0, 152, 100, 106),
        .moves = {MOVE_SHEER_COLD, MOVE_SURF, MOVE_PSYCHIC, MOVE_ICE_BEAM},
    },
    {
        .species = SPECIES_SLAKING,
        .heldItem = ITEM_SCOPE_LENS,
        .iv = TRAINER_PARTY_IVS(16, 16, 16, 16, 16, 16),
        .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
        .ev = TRAINER_PARTY_EVS(152, 152, 0, 106, 100, 0),
        .moves = {MOVE_EARTHQUAKE, MOVE_REST, MOVE_CRUSH_CLAW, MOVE_FOCUS_PUNCH},
    },
    {
        .species = SPECIES_CROBAT,
        .heldItem = ITEM_BRIGHT_POWDER,
        .iv = TRAINER_PARTY_IVS(16, 16, 16, 16, 16, 16),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 106, 152),
        .moves = {MOVE_CONFUSE_RAY, MOVE_DOUBLE_TEAM, MOVE_TOXIC, MOVE_FLY},
    },
    // Gold Symbol.
    {
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_WHITE_HERB,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
        .ev = TRAINER_PARTY_EVS(6, 252, 252, 0, 0, 0),
        .moves = {MOVE_OVERHEAT, MOVE_EXTREME_SPEED, MOVE_ROAR, MOVE_PROTECT},
    },
    {
        .species = SPECIES_SLAKING,
        .heldItem = ITEM_SCOPE_LENS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = TRAINER_PARTY_NATURE(NATURE_HARDY),
        .ev = TRAINER_PARTY_EVS(6, 252, 0, 252, 0, 0),
        .moves = {MOVE_HYPER_BEAM, MOVE_EARTHQUAKE, MOVE_FOCUS_PUNCH, MOVE_YAWN},
    },
    {
        .species = SPECIES_SUICUNE,
        .heldItem = ITEM_KINGS_ROCK,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = TRAINER_PARTY_NATURE(NATURE_HASTY),
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 6, 0, 0),
        .moves = {MOVE_ICE_BEAM, MOVE_WATERFALL, MOVE_TOXIC, MOVE_CALM_MIND},
    },
};

static const struct TrainerMon sFrontierBrainParty_BattleArena[] =
{
    // Silver Symbol.
    {
        .species = SPECIES_BRELOOM,
        .heldItem = ITEM_QUICK_CLAW,
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 158, 100),
        .moves = {MOVE_SPORE, MOVE_SLUDGE_BOMB, MOVE_FOCUS_PUNCH, MOVE_GIGA_DRAIN},
    },
    {
        .species = SPECIES_UMBREON,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .ev = TRAINER_PARTY_EVS(152, 0, 100, 0, 152, 106),
        .moves = {MOVE_BODY_SLAM, MOVE_CONFUSE_RAY, MOVE_PSYCHIC, MOVE_FAINT_ATTACK},
    },
    {
        .species = SPECIES_SHEDINJA,
        .heldItem = ITEM_BRIGHT_POWDER,
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .ev = TRAINER_PARTY_EVS(0, 252, 6, 252, 0, 0),
        .moves = {MOVE_SHADOW_BALL, MOVE_MUD_SLAP, MOVE_GIGA_DRAIN, MOVE_SILVER_WIND},
    },
    // Gold Symbol.
    {
        .species = SPECIES_HERACROSS,
        .heldItem = ITEM_SALAC_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 6),
        .moves = {MOVE_MEGAHORN, MOVE_ENDURE, MOVE_REVERSAL, MOVE_EARTHQUAKE},
    },
    {
        .species = SPECIES_DEOXYS_SPEED,
        .heldItem = ITEM_WHITE_HERB,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
        .moves = {MOVE_PSYCHO_BOOST, MOVE_SUPERPOWER, MOVE_ZAP_CANNON, MOVE_SHADOW_BALL},
    },
    {
        .species = SPECIES_TYRANITAR,
        .heldItem = ITEM_CHOICE_BAND,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 6),
        .moves = {MOVE_CRUNCH, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_EARTHQUAKE},
    },
};

static const struct TrainerMon sFrontierBrainParty_BattlePike[] =
{
    // Silver Symbol.
    {
        .species = SPECIES_SEVIPER,
        .heldItem = ITEM_FOCUS_BAND,
        .iv = TRAINER_PARTY_IVS(16, 16, 16, 16, 16, 16),
        .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 6, 0),
        .moves = {MOVE_SUPER_FANG, MOVE_CRUNCH, MOVE_POISON_FANG, MOVE_FLAMETHROWER},
    },
    {
        .species = SPECIES_SHUCKLE,
        .heldItem = ITEM_CHESTO_BERRY,
        .iv = TRAINER_PARTY_IVS(16, 16, 16, 16, 16, 16),
        .nature = TRAINER_PARTY_NATURE(NATURE_SASSY),
        .ev = TRAINER_PARTY_EVS(252, 106, 0, 0, 0, 252),
        .moves = {MOVE_REST, MOVE_DOUBLE_TEAM, MOVE_SANDSTORM, MOVE_TOXIC},
    },
    {
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_CHESTO_BERRY,
        .iv = TRAINER_PARTY_IVS(16, 16, 16, 16, 16, 16),
        .nature = TRAINER_PARTY_NATURE(NATURE_BRAVE),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
        .moves = {MOVE_REST, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_BODY_SLAM},
    },
    // Gold Symbol.
    {
        .species = SPECIES_SEVIPER,
        .heldItem = ITEM_FOCUS_BAND,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 6),
        .moves = {MOVE_SWAGGER, MOVE_CRUNCH, MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN},
    },
    {
        .species = SPECIES_MILOTIC,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_SURF, MOVE_REFRESH, MOVE_RECOVER, MOVE_TOXIC},
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 6, 0),
    },
    {
        .species = SPECIES_DRAGONITE,
        .heldItem = ITEM_LUM_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .ev = TRAINER_PARTY_EVS(252, 6, 0, 0, 0, 252),
        .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_OUTRAGE, MOVE_DYNAMIC_PUNCH},
    },
};

static const struct TrainerMon sFrontierBrainParty_BattlePyramid[] =
{
    // Silver Symbol.
    
    {
        .species = SPECIES_REGICE,
        .heldItem = ITEM_CHESTO_BERRY,
        .iv = TRAINER_PARTY_IVS(16, 16, 16, 16, 16, 16),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .ev = TRAINER_PARTY_EVS(152, 0, 106, 0, 100, 152),
        .moves = {MOVE_ZAP_CANNON, MOVE_ICE_BEAM, MOVE_AMNESIA, MOVE_REST},
    },
    {
        .species = SPECIES_REGISTEEL,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(16, 16, 16, 16, 16, 16),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .ev = TRAINER_PARTY_EVS(152, 152, 0, 0, 6, 200),
        .moves = {MOVE_EARTHQUAKE, MOVE_EXPLOSION, MOVE_CURSE, MOVE_METEOR_MASH},
    },
    {
        .species = SPECIES_REGIROCK,
        .heldItem = ITEM_QUICK_CLAW,
        .iv = TRAINER_PARTY_IVS(16, 16, 16, 16, 16, 16),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 6),
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_ROCK_BLAST, MOVE_SANDSTORM, MOVE_EARTHQUAKE},
    },
    // Gold Symbol.
    {
        .species = SPECIES_ZAPDOS,
        .heldItem = ITEM_LEFTOVERS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = TRAINER_PARTY_NATURE(NATURE_MILD),
        .ev = TRAINER_PARTY_EVS(6, 0, 252, 252, 0, 0),
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_SKY_ATTACK, MOVE_EXTRASENSORY},
    },
    {
        .species = SPECIES_ENTEI,
        .heldItem = ITEM_LUM_BERRY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .ev = TRAINER_PARTY_EVS(6, 0, 252, 252, 0, 0),
        .moves = {MOVE_CALM_MIND, MOVE_FIRE_BLAST, MOVE_SUNNY_DAY, MOVE_SOLAR_BEAM},
    },
    {
        .species = SPECIES_REGIROCK,
        .heldItem = ITEM_WHITE_HERB,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 6),
        .moves = {MOVE_SUPERPOWER, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_EXPLOSION},
    },
};