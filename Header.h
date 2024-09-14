#pragma once
std::string vectorToString(std::vector<double> temps, ItemsType it = ItemsType::AllItems)
{
	std::string result{};

	switch (it)
	{
	case ItemsType::Positive:
		for (auto& t : temps)
		{
			if (t > 0)
			{
				result.append(std::to_string(t) + " ");
			}
		}
		break;
	case ItemsType::Negative:
		for (auto& t : temps)
		{
			if (t < 0)
			{
				result.append(std::to_string(t) + " ");
			}
		}
		break;
	case ItemsType::AllItems:
		for (auto& t : temps)
		{
			result.append(std::to_string(t) + " ");
		}
		break;
	}

	return result;
}