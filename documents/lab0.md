---
title: Surge AI
author: Pi (pk2269@nyu.edu)
date: Feb 23 2023
---

# Background

When it comes to AI, we can classify many types of data

- Images
- Videos
- Audio (Sound)
- Natural Language Processing (Textual Data)
- Point Cloud (3D data)

... and so on. And in order to classify them to create AI models, we need to label them first before training the AI. The labelling is a tedious task.

We have done image and video data labelling for ages, and a lot of tools exist already for that, such as Roboflow Annotate ([https://roboflow.com/annotate](https://roboflow.com/annotate)), Dataloop ([https://dataloop.ai/solutions/data-annotation/](https://dataloop.ai/solutions/data-annotation/)), Superb AI([https://www.superb-ai.com/product/labeling](https://www.superb-ai.com/product/labeling)). Traditionally we manually labeled data, but with these tools, they can today, be used to **predict the labels** and humans only need to confirm whether they are correct or not (assuming there are no niche data in the dataset, such as something the existing model has never seen before).


However, for other kinds of data (read Audio and NLP, and point cloud), automated data labelling is still in early stages. These are new kinds of data we handle. So labelling them is mostly manual because we don't have much existing datasets.


# Surge AI and what they offer

From what I can see, Surge AI seems to **provide a tool to automate the labelling of NLP (textual data)**, in multiple languages. Their service is only specialized for textual Natural Language Processing data. 

From the information they have on website, it appears they are a very early stage company with a small userbase (i.e. they have restricted access to their tools, don't explain the technical details or give a trial demo without contacting them first, and does not offer pricing information publicly). Therefore, not much information can be inferred of their product.

It appears to be a B2B company, with the clients being mainly other firms and not individuals.

Financially, they have  raised a total of $25M in funding over 1 round. This was a Series A round raised on Jul 1, 2020 - [https://www.crunchbase.com/organization/surge-ai-b4ea/company_financials](https://www.crunchbase.com/organization/surge-ai-b4ea/company_financials).

# What Pi thinks

The idea iteself is not very novel. It is a natural step that once you have written a data labelling software, the next step is to automate the process. It's just that NLP data automated labelling is in early stages and there is not much firms offering such services yet. 

As a case study, even as of Jan, 2023, OpenAI (the guys behind ChatGPT), used African manual workers to label the data to patch ChatGPT to become less toxic, at [https://time.com/6247678/openai-chatgpt-kenya-workers/](https://time.com/6247678/openai-chatgpt-kenya-workers/). (Confession - Pi also used a good amount for his research, but paid well). With the explosion of ChatGPT and the rise of language-related AI, more companies will be looking for tools to train their own language models and I personally predict very strong demand for the tool like Surge.

However, since it's an early stage startup with secretive product, we must be aware whether if it is truly automated as it claims, or it is doing something sketchy under the hood. For example, the well known company, Scale AI, initially used manual humans to prepare and label its data (and still sold their product as automated data labelling tool for self driving cars). Read more in the following articles.

- [https://techcrunch.com/2016/07/25/scale-lets-companies-outsource-their-human-powered-tasks-with-one-line-of-code/](https://techcrunch.com/2016/07/25/scale-lets-companies-outsource-their-human-powered-tasks-with-one-line-of-code/)
- [https://www.ycombinator.com/blog/scale/](https://www.ycombinator.com/blog/scale/)

So their product was nothing more than a Mechanical Turk initially, but now it has become automated.

Surge AI currently have a strong Python API documentation on its site at [https://app.surgehq.ai/docs/api#reports](https://app.surgehq.ai/docs/api#reports), which can be used to access their product with a particular API key. However, I have not come across automation in their documentation,thus cannot be sure. 

However, it indeed have a very good PR.

# Commercial Competitors

Another startup with almost identical product seems to be Datasaur AI - [https://datasaur.ai/](https://datasaur.ai/). They are similarly secretive, but appears to target individuals too, in addition to 

> **Datasaur's Solution**: Increase your team’s time by automating monotonous labeling tasks. Let them focus on building better models instead. Automate the bulk of the labeling workflow, from project setup and export to labeling itself.

Datasaur also have a very strong documentation on its site - [https://datasaurai.gitbook.io/datasaur/basics/lets-get-labeling](https://datasaurai.gitbook.io/datasaur/basics/lets-get-labeling). Therefore, it's likely that the product exists.




