# In short
My traning project for learning pattern "Strategy"
# About
## Main hierarhy
`Person` -> `NPC` -> [`Trader`, `Hippie`]
## About hierarhy nodes
#### Person
Just  `name`__:string__ field with _getter_ and _setter_

#### NPC 
Has fields pointers to interfaces: 
- `IHitable` _(can make **hit** to other NPC)_ 
- `ITradable` _(can **trade** with other NPC)_

#### Trader
`IHitable` **is** `EasyHit`

`ITradable` **is** `ProTrade`

#### Hippie
`IHitable` **is** `PeacfulHit`

`ITradable` **is** `SimpleTrade`

## Interfaces hierarhy:
`IHitable` -> [`PeacfulHit`, `EasyHit`]

`ITradable` -> [`ProTrade`, `SimpleTrade`]



