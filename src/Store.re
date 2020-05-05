type appState = {counter: int};
type appAction =
  | Increment
  | Decrement;

let appReducer = ({counter}, action) =>
  switch (action) {
  | Increment => {counter: counter + 1}
  | Decrement => {counter: counter - 1}
  };

let appStore =
  Reductive.Store.create(
    ~reducer=appReducer,
    ~preloadedState={counter: 0},
    (),
  );

module AppStore = {
  include ReductiveContext.Make({
    type action = appAction;
    type state = appState;
  });
};
