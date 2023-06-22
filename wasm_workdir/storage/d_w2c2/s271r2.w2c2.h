#ifndef s271r2_H
#define s271r2_H

#include "w2c2_base.h"

typedef struct s271r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s271r2Instance;

void f0(s271r2Instance*);

void f1(s271r2Instance*);

U32 f2(s271r2Instance*);

void f3(s271r2Instance*,U32);

void f4(s271r2Instance*,U32);

void s271r2____wasm_call_ctors(s271r2Instance*i);

void s271r2____wasm_apply_data_relocs(s271r2Instance*i);

U32 s271r2_func_1(s271r2Instance*i);

void s271r2_call_cb(s271r2Instance*i,U32 l0);

void s271r2Instantiate(s271r2Instance* instance, void* resolve(const char* module, const char* name));

void s271r2FreeInstance(s271r2Instance* instance);

#endif /* s271r2_H */

