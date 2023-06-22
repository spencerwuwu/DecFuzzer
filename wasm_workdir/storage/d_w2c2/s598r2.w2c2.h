#ifndef s598r2_H
#define s598r2_H

#include "w2c2_base.h"

typedef struct s598r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s598r2Instance;

void f0(s598r2Instance*);

void f1(s598r2Instance*);

U32 f2(s598r2Instance*);

void f3(s598r2Instance*,U32);

U32 f4(s598r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s598r2Instance*,U32,U32,U32,U32,U32);

void f6(s598r2Instance*,U32);

void f7(s598r2Instance*,U32,U32,U32);

void f8(s598r2Instance*,U32,U32,U32);

void s598r2____wasm_call_ctors(s598r2Instance*i);

void s598r2____wasm_apply_data_relocs(s598r2Instance*i);

U32 s598r2_func_1(s598r2Instance*i);

void s598r2_call_cb(s598r2Instance*i,U32 l0);

void s598r2Instantiate(s598r2Instance* instance, void* resolve(const char* module, const char* name));

void s598r2FreeInstance(s598r2Instance* instance);

#endif /* s598r2_H */

