/*
 * THIS FILE IS AUTO-GENERATED - DO NOT EDIT
 */

#include "d2ai_ability.h"

namespace d2ai {

const Ability Ability::NOT_DECODED{
    0,
    "",
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    0.,
    0,
    0,
    0.,
    0.,
    0.,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    false,
    false,
    false
};

Ability::Ability(
        int slot,
        const std::string& name,
        bool upgradable,
        bool autoCast,
        bool toggled,
        bool toggle,
        bool activated,
        bool channeling,
        bool cooldownReady,
        bool fullyCastable,
        bool hidden,
        bool inAbilityPhase,
        bool ownersManaEnough,
        bool passive,
        bool stealable,
        bool stolen,
        bool trained,
        bool procsMagicStick,
        bool behaviorPassive,
        bool behaviorNoTarget,
        bool behaviorUnitTarget,
        bool behaviorPoint,
        bool behaviorAoe,
        bool behaviorNotLearnable,
        bool behaviorChannelled,
        double castPoint,
        int castRange,
        int channelledManaCostPerSecond,
        double channelTime,
        double duration,
        double cooldownTimeRemaining,
        int currentCharges,
        int damage,
        int damageType,
        int heroLevelRequiredToUpgrade,
        int initialCharges,
        int level,
        int manaCost,
        int maxLevel,
        int secondaryCharges,
        int targetTeam,
        int targetType,
        bool item,
        bool disassemblable,
        bool combineLocked)
    : slot(slot),
      name(name),
      upgradable(upgradable),
      autoCast(autoCast),
      toggled(toggled),
      toggle(toggle),
      activated(activated),
      channeling(channeling),
      cooldownReady(cooldownReady),
      fullyCastable(fullyCastable),
      hidden(hidden),
      inAbilityPhase(inAbilityPhase),
      ownersManaEnough(ownersManaEnough),
      passive(passive),
      stealable(stealable),
      stolen(stolen),
      trained(trained),
      procsMagicStick(procsMagicStick),
      behaviorPassive(behaviorPassive),
      behaviorNoTarget(behaviorNoTarget),
      behaviorUnitTarget(behaviorUnitTarget),
      behaviorPoint(behaviorPoint),
      behaviorAoe(behaviorAoe),
      behaviorNotLearnable(behaviorNotLearnable),
      behaviorChannelled(behaviorChannelled),
      castPoint(castPoint),
      castRange(castRange),
      channelledManaCostPerSecond(channelledManaCostPerSecond),
      channelTime(channelTime),
      duration(duration),
      cooldownTimeRemaining(cooldownTimeRemaining),
      currentCharges(currentCharges),
      damage(damage),
      damageType(damageType),
      heroLevelRequiredToUpgrade(heroLevelRequiredToUpgrade),
      initialCharges(initialCharges),
      level(level),
      manaCost(manaCost),
      maxLevel(maxLevel),
      secondaryCharges(secondaryCharges),
      targetTeam(targetTeam),
      targetType(targetType),
      item(item),
      disassemblable(disassemblable),
      combineLocked(combineLocked) {
}

} /* namespace d2ai */
