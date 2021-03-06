// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE

import * as Curry from "bs-platform/lib/es6/curry.js";
import * as React from "react";
import * as CustomStyles from "./CustomStyles.bs.js";
import * as ReactNative from "react-native";

function CounterReducer(Props) {
  var match = React.useReducer((function (param, action) {
          if (action) {
            var count = param.count;
            return {
                    label: "Clicks " + String(count + 1 | 0),
                    count: count + 1 | 0
                  };
          } else {
            return {
                    label: "NO Clicks",
                    count: 0
                  };
          }
        }), {
        label: "NO Clicks",
        count: 0
      });
  var dispatch = match[1];
  return React.createElement(ReactNative.View, {
              style: CustomStyles.styles.sectionContainer,
              children: null
            }, React.createElement(ReactNative.Text, {
                  style: CustomStyles.styles.sectionTitle,
                  children: "Step One In Component"
                }), React.createElement(ReactNative.Text, {
                  style: CustomStyles.styles.sectionDescription,
                  children: null
                }, "Edit ", React.createElement(ReactNative.Text, {
                      style: CustomStyles.styles.highlight,
                      children: "src/App.re"
                    }), " to change this screen and then come back to see your edits."), React.createElement(ReactNative.Button, {
                  onPress: (function (_evt) {
                      return Curry._1(dispatch, /* Clicked */1);
                    }),
                  title: match[0].label
                }));
}

var make = CounterReducer;

export {
  make ,
  
}
/* react Not a pure module */
