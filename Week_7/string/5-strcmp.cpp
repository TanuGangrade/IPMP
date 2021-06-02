int ic_strcmp(string s1, string s2)
{
	int i;
	for (i = 0; s1[i] && s2[i]; ++i)
	{
		if (s1[i] == s2[i] || (s1[i] ^ 32) == s2[i]) //A=65 and a=97, inverting the 6th bit aka 32 in binary (xor) converts them to each other
		continue;
		else
		break;
	}

	if (s1[i] == s2[i])
		return 0;

	if ((s1[i] | 32) < (s2[i] | 32))
		return -1;
	return 1;
}
