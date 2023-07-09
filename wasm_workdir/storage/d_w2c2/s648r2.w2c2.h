#ifndef s648r2_H
#define s648r2_H

#include "w2c2_base.h"

typedef struct s648r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s648r2Instance;

void f0(s648r2Instance*);

void f1(s648r2Instance*);

U32 f2(s648r2Instance*);

void f3(s648r2Instance*,U32);

void f4(s648r2Instance*,U32);

void s648r2____wasm_call_ctors(s648r2Instance*i);

void s648r2____wasm_apply_data_relocs(s648r2Instance*i);

U32 s648r2_func_1(s648r2Instance*i);

void s648r2_call_cb(s648r2Instance*i,U32 l0);

void s648r2Instantiate(s648r2Instance* instance, void* resolve(const char* module, const char* name));

void s648r2FreeInstance(s648r2Instance* instance);

#endif /* s648r2_H */
