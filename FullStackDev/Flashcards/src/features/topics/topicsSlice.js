import { createSlice, createAction } from "@reduxjs/toolkit";
import { addQuiz } from "../quizzes/quizzesSlice";

const topicsSlice = createSlice({
    name: 'topics',
    initialState: {
        topics: {},
    },
    reducers: {
        addTopic(state, action) {
            const { id, name, icon } = action.payload;
            state.topics[id] = {
                id: id,
                name: name,
                icon: icon,
                quizIds: []
            }
        }
    },
    selectors: {
        selectTopics: (state) => state.topics
    },
    extraReducers: (builder) => {
        builder.addCase(addQuiz, (state, action) => {
                const { id, topicId } = action.payload;
                state.topics[topicId].quizIds.push(id)
            }
        )
    }
});

export const { addTopic } = topicsSlice.actions;
export const selectTopics = (state) => state.topics.topics;
export default topicsSlice.reducer;
