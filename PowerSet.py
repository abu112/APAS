def PowerSet(originalSet):
    subSets = []

    numberofCombinations = 2**len(originalSet)

    for combinationIndex in range(0,  numberofCombinations):
        subset = []

        for seElementIndex in range(0, len(originalSet)):

            if combinationIndex & 1 << seElementIndex:
                subset.append(originalSet[seElementIndex])

        subSets.append(subset)

    return subSets


print(PowerSet([1, 2, 3]))
