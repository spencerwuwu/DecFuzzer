#ifndef s727r2_H
#define s727r2_H

#include "w2c2_base.h"

typedef struct s727r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s727r2Instance;

void f0(s727r2Instance*);

void f1(s727r2Instance*);

U32 f2(s727r2Instance*);

void f3(s727r2Instance*,U32);

U32 f4(s727r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s727r2Instance*,U32,U32,U32,U32,U32);

void f6(s727r2Instance*,U32);

void f7(s727r2Instance*,U32,U32,U32);

void f8(s727r2Instance*,U32,U32,U32);

void s727r2____wasm_call_ctors(s727r2Instance*i);

void s727r2____wasm_apply_data_relocs(s727r2Instance*i);

U32 s727r2_func_1(s727r2Instance*i);

void s727r2_call_cb(s727r2Instance*i,U32 l0);

void s727r2Instantiate(s727r2Instance* instance, void* resolve(const char* module, const char* name));

void s727r2FreeInstance(s727r2Instance* instance);

#endif /* s727r2_H */

