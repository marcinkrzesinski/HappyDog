#pragma once


#include <memory>
#include <stack>

#include "State.hpp"

namespace System
{
	typedef std::unique_ptr<State> StateRef;

	class StateMachine
	{
	private:
		std::stack<StateRef>_states;
		StateRef _newState;

		bool _isRemoving;
		bool _isAdding;
		bool _isReplacing;

	public:
		StateMachine() {}
		~StateMachine() {}

		void AddState(StateRef newState, bool isReplacing = true);
		void RemoveState();

		void ProcessStateChanges();

		StateRef& GetActiveState();

	};

}
