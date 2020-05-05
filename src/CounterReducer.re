open ReactNative;
open CustomStyles;

type buttonState =
  | NoClicked
  | Clicked;

type state = {
  label: string,
  count: int,
};

[@react.component]
let make = () => {
  let (state, dispatch) =
    React.useReducer(
      ({count}, action) =>
        switch (action) {
        | NoClicked => {label: "NO Clicks", count: 0}
        | Clicked => {
            label: "Clicks " ++ string_of_int(count + 1),
            count: count + 1,
          }
        },
      {label: "NO Clicks", count: 0},
    );
  <View style={styles##sectionContainer}>
    <Text style={styles##sectionTitle}>
      "Step One In Component"->React.string
    </Text>
    <Text style={styles##sectionDescription}>
      "Edit "->React.string
      <Text style={styles##highlight}> "src/App.re"->React.string </Text>
      " to change this screen and then come back to see your edits."
      ->React.string
    </Text>
    <Button title={state.label} onPress={_evt => {dispatch(Clicked)}} />
  </View>;
};
